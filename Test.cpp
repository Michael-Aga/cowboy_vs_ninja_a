#include "doctest.h"
#include "sources/Team.hpp"
#include <stdio.h>
#include <iostream>

using namespace std;
using namespace ariel;

TEST_CASE("Point check")
{
    CHECK_NOTHROW(Point(2, 5));
    Point a(2, 5);
    Point b(10, 20);

    CHECK(a.distance(b) == b.distance(a));

    CHECK_NOTHROW(a.moveTowards(a, a, 0));
    CHECK_NOTHROW(b.moveTowards(b, b, 0));
    
}

TEST_CASE("Test the character functions")
{
    Character juanCarlos(Point(2, 5), 100, "Juan");
    Character jamesBond(Point(2, 5), 100, "James");

    CHECK(juanCarlos.getName() == "Juan");
    CHECK(jamesBond.getName() == "James");

    CHECK(juanCarlos.isAlive() == true);
    CHECK(jamesBond.isAlive() == true);

    Character *juanLocation = &juanCarlos;
    Character *jamesLocation = &jamesBond;
    CHECK(juanCarlos.distance(jamesLocation) == 0);
    CHECK(jamesBond.distance(jamesLocation) == 0);

    jamesBond.hit(100);
    juanCarlos.hit(100);

    CHECK(jamesBond.isAlive() == false);
    CHECK(juanCarlos.isAlive() == false);
}

TEST_CASE("Cowboy functins")
{
    Cowboy *Jerry = new Cowboy("Jerry", Point(2, 5));
    Cowboy *Tom = new Cowboy("Tom", Point(2, 6));

    CHECK(Jerry->hasboolets() == true);
    CHECK(Tom->hasboolets() == true);

    for (int i = 0; i < 6; i++)
    {
        Jerry->shoot(Tom);
    }

    CHECK(Jerry->hasboolets() == false);
    CHECK_NOTHROW(Jerry->reload());

    for (int i = 0; i < 6; i++)
    {
        Tom->shoot(Jerry);
    }

    CHECK(Tom->hasboolets() == false);
    CHECK_NOTHROW(Tom->reload());

    for (int i = 0; i < 5; i++)
    {
        Jerry->shoot(Tom);
    }

    CHECK(Tom->isAlive() == false);
    CHECK_NOTHROW(Jerry->reload());

    free(Jerry);
    free(Tom);
}

TEST_CASE("Ninjas functions")
{
    YoungNinja *Wassabi = new YoungNinja("Wassabi", Point(0, 0));
    YoungNinja *Tariyaki = new YoungNinja("Tariyaki", Point(0, 1));

    CHECK(Wassabi->isAlive() == true);
    CHECK(Tariyaki->isAlive() == true);

    for (int i = 0; i < 3; i++)
    {
        Wassabi->slash(Tariyaki);
    }

    CHECK(Tariyaki->isAlive() == false);

    free(Wassabi);
    free(Tariyaki);
}

