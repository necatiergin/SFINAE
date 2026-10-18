
template<typename T>
auto process(T& x)
    -> decltype(
        (void)x.begin(),
        (void)x.end(),
        (void)x.size(),
        void()
    )
{
    // ...
}
