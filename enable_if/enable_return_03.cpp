
#include <type_traits>

template<typename T>
std::enable_if_t<std::is_integral_v<T>, T>
square(T x)
{
    return x * x;
}

int main()
{
    auto a = square(10);     // int
    auto b = square(20L);    // long
    // square(3.5);          // no matching function
}
