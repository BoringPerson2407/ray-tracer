#pragma once
#include "vec3.h"

class Ray
{
    public:
        Point3 origin;
        Vec3 direction;


    Ray() : origin(), direction() {}
    Ray(const Point3 &o,const Vec3 &d) : origin(o), direction(d) {}

    Point3 at(double t) const
    {
        return origin + (t * direction);
    }
};