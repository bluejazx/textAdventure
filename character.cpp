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

void display_options(std::vector<std::string> &options)
{
    std::cout << "Enter the number of an option from the menu below: ";
    for(int i = 0; i < options.size(); i++)
    {
        int j = 1;
        std::cout << j + ". " + options[i];
        j++;
    }
    options.clear();
}