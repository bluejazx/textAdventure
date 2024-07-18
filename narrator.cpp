#include <iostream>
#include "narrator.hpp"

std::string Narrator::welcome()
{
    
    character_lines.push_back("Welcome storied traveler to the land of Ooo a BMO text adeventure tm. game will i will offer you desicions and the story will change based on them (enter any key to continue)");
    character_lines.push_back("I once new a great warrior just like you although, he had much more buetiful hair");
    character_lines.push_back("Well I must know your name before I can continue go on tell me! tell me!! tell me!!!");
    speak(this->chararacter_name, this->character_lines);
    std::cout << "Enter your name below: " << std::endl;
    std::cin >> player_name;
    return player_name;
}

void Narrator::introduction()
{
    character_lines.push_back("Sorry about that " + player_name + " I got a bit exicited");
    character_lines.push_back("It has just been so long since ive seen someone like you being Ooo's king is quite a bit lonley");
    character_lines.push_back("Its okay though you are here now so what do you want to learn about");
    character_lines.push_back("I am all knowing and all powerful for I am wait no i dont know that one");
    speak(this->chararacter_name, this->character_lines);
}

