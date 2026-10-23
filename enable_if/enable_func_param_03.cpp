template<typename T>
void foo(
    T&& x,
    std::void_t<
        decltype(std::declval<T&>().begin())
    >* = nullptr)
{
    std::cout << "has begin\n";
}
