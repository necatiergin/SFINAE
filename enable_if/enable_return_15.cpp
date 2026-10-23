#include <iostream>
#include <type_traits>

template<typename... Ts>
std::enable_if_t<(std::is_integral_v<Ts> && ...)>
foo(Ts... args)
{
    std::cout << "all integral\n";
}

template<typename... Ts>
std::enable_if_t<!(std::is_integral_v<Ts> && ...)>
foo(Ts... args)
{
    std::cout << "not all integral\n";
}

int main()
{
    foo(10, 20, 30);
    foo(10, 3.14, 20);
}
