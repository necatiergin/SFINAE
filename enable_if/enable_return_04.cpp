#include <type_traits>

template<typename T>
auto square(T x)
-> std::enable_if_t<std::is_integral_v<T>, T>
{
    return x * x;
}
