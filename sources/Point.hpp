#pragma once
#include <stdio.h>
#include <iostream>

namespace ariel
{
    class Point
    {
    private:
        double _x, _y;

    public:
        Point(double x, double y) : _x(x), _y(y) {}

        double distance(Point);
        void print();
        Point moveTowards(Point, Point, double);
    };
}