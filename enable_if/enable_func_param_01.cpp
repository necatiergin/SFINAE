#include <iostream>
#include <utility>
#include <vector>

template<typename T>
void foo(
    T&& x,
    decltype(std::declval<T&>().begin())* = nullptr)
{
    std::cout << "has begin\n";
}

void foo(...)
{
    std::cout << "fallback\n";
}

int main()
{
    std::vector<int> v;

    foo(v);
    foo(10);
}
