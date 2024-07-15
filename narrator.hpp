#include <iostream>
#include "character.hpp"

class Narrator : public Character
{
    protected:

    public:
    using Character::Character;
        void welcome();
};