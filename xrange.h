#pragma once
#include <experimental/generator>

namespace utils {
namespace detail {
template <typename... Ts> using generator = std::experimental::generator<Ts...>;
}

inline namespace v1 {
detail::generator<long long> xrange(long long min, long long max, long long step = 1);
detail::generator<long long> xrange(long long max);
}
}