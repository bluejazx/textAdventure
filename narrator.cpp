#include <iostream>
#include "narrator.hpp"

void Narrator::welcome()
{
    character_lines.push_back("Welcome storied traveler to the land of Ooo a BMO text adeventure tm. game will i will offer you desicions and the story will change based on them (enter any key to continue)");
    character_lines.push_back("I once new a warrior just like you");
    character_lines.push_back("Well I must know your name before I can continue go on tell me");
    speak(this->chararacter_name, this->character_lines);
}