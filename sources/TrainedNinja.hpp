#include "Character.hpp"

namespace ariel{
    class TrainedNinja : public Character{
        private:
        int _movmentSpeed;

        public:
        TrainedNinja(std::string myName, Point myLocation)
        : Character(myLocation,120,myName), _movmentSpeed(12){}

        std::string print() override;
        void move(Character*);
        void slash(Character*);
    };
}