#include "Character.hpp"

using namespace std;
using namespace ariel;

bool Character::isAlive()
{
    return false;
}

double Character::distance(Character *)
{
    return 0.0;
}

void Character::hit(int)
{
}

string Character::getName()
{
    return "";
}

Point Character::getLocation()
{
    return Point(0,0);
}

string Character::print()
{
    return "";
}
