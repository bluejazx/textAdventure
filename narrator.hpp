#pragma once

#include <iostream>
#include "character.hpp"

class Narrator : public Character
{
    protected:

    public:
    //base constructor for all character derived classes
    using Character::Character;
        void welcome();
};