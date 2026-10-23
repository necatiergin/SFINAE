
#include <iostream>
#include <utility>
#include <vector>

template<typename T>
void foo(T x,
    decltype((void)std::declval<T&>().begin())* = nullptr)
{
    std::cout << "begin available\n";
}

void foo(...)
{
    std::cout << "fallback\n";
}

int main()
{
    std::vector<int> vec{ 1, 2, 3 };

    foo(vec);
    foo(10);
}
