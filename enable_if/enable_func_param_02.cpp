
#include <iostream>
#include <type_traits>

template<typename T>
void foo(T,
    std::enable_if_t<std::is_integral_v<T>>* = nullptr)
{
    std::cout << "integral\n";
}

template<typename T>
void foo(T,
    std::enable_if_t<std::is_floating_point_v<T>>* = nullptr)
{
    std::cout << "floating point\n";
}

int main()
{
    foo(10);
    foo(3.14);
    foo(2.5f);
}
