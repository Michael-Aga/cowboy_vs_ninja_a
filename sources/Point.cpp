#include "Point.hpp"

using namespace std;
using namespace ariel;

double Point::distance(Point)
{
    return 0.0;
}

void Point::print()
{
    cout << "print" << endl;
}

Point Point::moveTowards(Point, Point, double)
{
    return Point(0,0);
}