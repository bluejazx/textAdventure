#pragma once

#include <iostream>
#include "character.hpp"

class Narrator : public Character
{
    protected:
        std::string player_name;

    public:
        //base constructor for all character derived classes
        using Character::Character;

        //displays welcome message to player and gets their name storing it in player object and in Narrator
        std::string welcome();
};