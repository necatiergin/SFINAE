
#include <iostream>
#include <vector>

template<typename T>
auto process(T& x)
-> decltype((void)x.begin(), void())
{
    std::cout << "has begin()\n";
}

void process(...)
{
    std::cout << "fallback\n";
}

int main()
{
    std::vector<int> v;
    int x{};

    process(v); // has begin()
    process(x); // fallback
}
