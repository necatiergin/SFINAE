
#include <iostream>
#include <type_traits>

template<typename T>
std::enable_if_t<std::is_integral_v<T>, T>
foo(T x)
{
    std::cout << "integral\n";
    return x;
}

int main()
{
    foo(10);      // OK
    foo(3.14);    // no matching function
}
