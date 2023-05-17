#include "Character.hpp"

namespace ariel{
    class Cowboy : public Character{
        private:
        int _amountOfBullets;

        public:
        Cowboy(std::string myName, Point myLocation)
        : Character(myLocation,110,myName),_amountOfBullets(6) {}

        std::string print() override;
        void shoot(Character*);
        bool hasboolets();
        void reload();
    };
}