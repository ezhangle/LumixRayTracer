#pragma once

#include "light.h"
#include "vector3.h"

namespace LumixRayTracer
{

class DirectionalLight : public Light
{
private:
	Vector3 _direction;

public:
	DirectionalLight()
		: _direction(0.0f, -1.0f, 0.0f)
	{ }

	DirectionalLight(const Vector3 &direction)
		: _direction(direction)
	{
		_direction.Normalize();
	}

	virtual const Vector3& GetDirection(const Vector3& point) const override
	{
		return _direction;
	}
};

} // ~ namespace LumixRayTracer
