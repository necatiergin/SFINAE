#include <type_traits>

template <typename T, typename U, typename = void>
struct is_addable : std::false_type {};

template <typename T, typename U>
struct is_addable<
    T,
    U,
    std::void_t<
    decltype(
        std::declval<T>() + std::declval<U>()
        )
    >
> : std::true_type {};

template <typename T, typename U>
inline constexpr bool is_addable_v = is_addable<T, U>::value;

static_assert(is_addable_v<int, double>);
static_assert(!is_addable_v<int*, int*>);
