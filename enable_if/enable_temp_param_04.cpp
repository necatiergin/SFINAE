#include <iostream>
#include <vector>

template<typename T>
void foo(T, typename T::value_type* = nullptr)
{
    std::cout << "value_type\n";
}

template<typename T>
void foo(T, typename T::size_type* = nullptr)
{
    std::cout << "size_type\n";
}

int main()
{
    foo(std::vector<int>{});// ambigous
}
