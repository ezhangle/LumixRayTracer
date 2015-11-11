#include "math_rt.h"

#include <math.h>


namespace LumixRayTracer
{

namespace Math
{

float RadFromDeg(const float angle)
{
	return angle * PI / 180.0f;
}

float DegFromRad(const float angle)
{
	return angle / PI * 180.0f;
}

float Pow(const float number, const float exponent)
{
	return powf(number, exponent);
}

float Sqrt(const float number)
{
	return sqrtf(number);
}


float Min(const float a, const float b)
{
	return a < b ? a : b;
}

float Max(const float a, const float b)
{
	return a < b ? b : a;
}

float Min(const float a, const float b, const float c)
{
	return a < b ? (a < c ? a : c) : (b < c ? b : c);
}

float Max(const float a, const float b, const float c)
{
	return a < b ? (b < c ? c : b) : (a < c ? c : a);
}

float Abs(const float number)
{
	return fabsf(number);
}

float Ceil(const float number)
{
	return ceilf(number);
}

float Floor(const float number)
{
	return floorf(number);
}


float Mod(const float numer, const float denom)
{
	return fmod(numer, denom);
}


float Tan(const float angle)
{
	return tanf(angle);
}

} // ~ namespace Math

} // ~ namespace LumixRayTracer
