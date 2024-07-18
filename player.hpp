#pragma once

#include <iostream>
#include <vector>
#include "character.hpp"


class Player : public Character
{
    protected:
        //tracks the kind of descision the player is making
        int choice_number = 1;
        //tracks players avalibe options
        std::vector<std::string> possible_choices;
        //trakcs what choice the player has made
        int player_choice = 1;
        
        
        

    public:
        //base constructor for all character derived classes
        using Character::Character;

        //has the player make a choice from displayed menu
        void make_choice();
        
};