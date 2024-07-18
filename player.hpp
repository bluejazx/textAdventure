#pragma once

#include <iostream>
#include "character.hpp"

class Player : public Character
{
    protected:
        int player_choice;

    public:
        //base constructor for all character derived classes
        using Character::Character;
        
};