#include <iostream>
#include "character.hpp"

Character::Character(std::string name)
{
    chararacter_name = name;
}

void speak(std::string const &name, std::vector<std::string> &lines)
{
    for(int i = 0; i < lines.size(); i++)
    {
        std::cout << name << ": "<< lines[i] << std::endl;
        getch();  
    }

    lines.clear();
    std::cout << "..." << std::endl;  
    getch();
}