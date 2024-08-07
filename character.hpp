#pragma once

#include <iostream>
#include <vector>
#include <conio.h>

class Character
{
    protected:
        //vector tracks lines that the character will say
        std::vector<std::string> character_lines;
        //what the chracter is named and is refered to as in both code and game
        std::string chararacter_name;
        //track player choice
        int player_choice;
        //tracks the option player is given
        int player_option = 1;
    public:
        //creates new character using just a name
        Character(std::string name);
};

//takes in a refrence to a chracters name and lines vector adn prints all line individualy followed by a ellipse and then clears the pausing every 5 lines and again at the end
void speak(std::string const &name, std::vector<std::string> &lines);

//Prints out menu of possible player choices
void display_options(std::vector<std::string> &options);