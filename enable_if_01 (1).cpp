//SFINAE by function default argument

#include <type_traits>
#include <iostream>

template <typename T>
void func(T x, std::enable_if_t<std::is_integral_v<T>>*  = nullptr)
{
	std::cout << "integer types\n";
}

template <typename T>
void func(T x, std::enable_if_t<!std::is_integral_v<T>>*  = nullptr)
{
	std::cout << "non integer types\n";
}

struct A {};

int main()
{
	func(1);
	func(1u);
	func('A');
	func(true);
	func(1.1);
	func(A {});
}
