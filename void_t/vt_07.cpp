#include <type_traits>

template <typename T, typename = void>
struct has_size : std::false_type {};

template <typename T>
struct has_size<
    T,
    std::void_t<
    decltype(std::declval<T&>().size())
    >
> : std::true_type {};
