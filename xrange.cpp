#include "xrange.h"

namespace utils {
inline namespace v1 {

detail::generator<long long> xrange(long long min, long long max, long long step /*= 1*/) {
	while (min < max) {
		auto current = min;
		min += step;
		__yield_value current;
	}
}

detail::generator<long long> xrange(long long max) {
	return xrange(0, max);
}

}
}