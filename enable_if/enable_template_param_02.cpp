#include <type_traits>
#include <iostream>

template<
    typename T,
    typename = std::enable_if_t<std::is_integral_v<T>>
>
void foo(T)
{
    std::cout << "integral\n";
}

int main()
{
    foo(10);    // OK
    foo(3.14);  // no matching function
}
