#pragma once

#if __cplusplus >= 202302L
#include <stdfloat>
#else
// 提供替代定义
using float32_t = float;
using float64_t = double;
#endif

// 其他代码...
