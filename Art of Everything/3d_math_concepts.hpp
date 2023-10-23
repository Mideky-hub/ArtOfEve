#ifndef MATH_3D_CONCEPTS
#define MATH_3D_CONCEPTS

#include <cmath>
#include <concepts>

template <typename T>
constexpr inline T sq(T x)
{
	return x * x;
}

template <typename T>
constexpr inline T cb(T x)
{
	return x * x * x;
}

template <typename T>
constexpr inline T scale(T input, T in_min, T in_max, T out_min, T out_max)
{
	input = glm::clamp(input, in_min, in_max);
	return (input - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

template <typename T>
constexpr inline T lerp(T a, T b, float t)
{
	t = glm::clamp(t, 0.0f, 1.0f);
	return a + t * (b - a);
}

template <typename T>
constexpr inline float inverse_lerp(T a, T b, T v)
{
	v = glm::clamp(v, a, b);
	return (v - a) / (b - a);
}

#endif	//	!MATH_3D_CONCEPTS 
