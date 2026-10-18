
#include <iostream>
#include <vector>

template<typename T>
auto foo(T& x) -> decltype(x.begin())
{
    std::cout << "begin overload\n";
    return x.begin();
}

template<typename T>
auto foo(T& x) -> decltype(x.size())
{
    std::cout << "size overload\n";
    return x.size();
}

int main()
{
    std::vector<int> v;

    foo(v); // ambiguous!
}
