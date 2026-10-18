#include <type_traits>
#include <iostream>

template<
    typename T,
    std::enable_if_t<std::is_integral_v<T>, int> = 0
>
void foo(T)
{
    std::cout << "integral\n";
}

template<
    typename T,
    std::enable_if_t<std::is_floating_point_v<T>, int> = 0
>
void foo(T)
{
    std::cout << "floating point\n";
}

int main()
{
    foo(10);
    foo(3.14);
}
