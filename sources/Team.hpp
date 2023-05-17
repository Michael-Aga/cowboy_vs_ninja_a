#pragma once
#include "Character.hpp"
#include "Cowboy.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include "OldNinja.hpp"
#include <vector>
#include <memory>
#include <stdio.h>

namespace ariel{
    class Team{
        private:
        std::vector<std::unique_ptr<Character>> characters;

        public:
        Team(Character* teamCapatain) {
            this->add(teamCapatain);
        }

        void add(Character*);
        void attack(Team*);
        int stillAlive();
        void print();
    };
}