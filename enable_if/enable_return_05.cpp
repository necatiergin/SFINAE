
#include <iostream>
#include <vector>

template<typename T>
auto foo(T x) -> decltype(x.begin())
{
    std::cout << "begin() available\n";
    return x.begin();
}

void foo(...)
{
    std::cout << "fallback\n";
}

int main()
{
    std::vector<int> vec{1, 2, 3};

    foo(vec);  // begin() available
    foo(10);   // fallback
}
