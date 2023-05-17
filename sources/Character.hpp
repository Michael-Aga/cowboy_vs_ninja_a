#pragma once
#include "Point.hpp"

namespace ariel{
    class Character{
        private:
        Point _myLocation;
        int _hp;
        std::string _myName;

        public:
        Character(Point myLocation,int myHP,std::string myName) : 
        _myLocation(myLocation), _hp(myHP), _myName(myName){}

        bool isAlive();
        double distance(Character *);
        void hit(int);
        std::string getName();
        Point getLocation();
        virtual std::string print();
    };
}