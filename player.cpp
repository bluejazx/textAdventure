#include <iostream>
#include <vector>
#include "player.hpp"

void Player::make_choice()
{
    switch(player_option)
    {
        case 1:
            {
                possible_choices.push_back("Ask about the warrior with bueatiful");
                possible_choices.push_back("Ask about others like me");
                possible_choices.push_back("Ask who the king of Ooo is");
                possible_choices.push_back("Ask about what the land of Ooo is");
                display_options(possible_choices);
                std::cin >> player_choice;
            }

    }
}