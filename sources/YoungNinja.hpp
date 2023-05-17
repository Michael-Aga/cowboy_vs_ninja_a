#include "Character.hpp"

namespace ariel{
    class YoungNinja : public Character{
        private:
        int _movmentSpeed;

        public:
        YoungNinja(std::string myName, Point myLocation)
        : Character(myLocation,100,myName), _movmentSpeed(14){}

        std::string print() override;
        void move(Character*);
        void slash(Character*);
    };
}