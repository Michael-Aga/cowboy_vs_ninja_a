#include "Cowboy.hpp"

using namespace std;
using namespace ariel;

string Cowboy::print()
{
    return "";
}

void Cowboy::shoot(Character *)
{

}

bool Cowboy::hasboolets()
{
    return this->_amountOfBullets > 0;
}

void Cowboy::reload()
{
    this->_amountOfBullets = 6;
}