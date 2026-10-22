#include <type_traits>
#include <vector>

template <typename T, typename = void>
struct has_iterator : std::false_type {};

template <typename T>
struct has_iterator<
    T,
    std::void_t<typename T::iterator>
> : std::true_type {};


template <typename T>
inline constexpr bool has_iterator_v = has_iterator<T>::value;

class Myclass{};
static_assert(has_iterator_v<std::vector<int>>);
static_assert(!has_iterator_v<Myclass>);
