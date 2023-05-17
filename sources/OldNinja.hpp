#include "Character.hpp"

namespace ariel{
    class OldNinja : public Character{
        private:
        int _movmentSpeed;

        public:
        OldNinja(std::string myName, Point myLocation)
        : Character(myLocation,150,myName), _movmentSpeed(8){}

        std::string print() override;
        void move(Character*);
        void slash(Character*);
    };
}