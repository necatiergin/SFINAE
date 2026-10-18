
template<typename T>
struct Helper {
    using type = typename T::value_type;
};

template<typename T>
auto foo(T) -> typename Helper<T>::type;

void foo(...);

int main()
{
    foo(10); // hard error
}
