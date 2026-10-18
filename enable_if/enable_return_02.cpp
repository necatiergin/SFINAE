#include <iostream>
#include <type_traits>

template<typename T>
std::enable_if_t<std::is_integral_v<T>, void>
func(T)
{
    std::cout << "integral\n";
}

template<typename T>
std::enable_if_t<std::is_floating_point_v<T>, void>
func(T)
{
    std::cout << "floating point\n";
}

int main()
{
    func(10);
    func(3.14);
    func(2.5f);
}
