#include <type_traits>

template <typename ...Ts>
using void_t = void;

static_assert(std::is_same_v<void_t<int, double, int>, void>);
static_assert(std::is_same_v<void_t<>, void>);
