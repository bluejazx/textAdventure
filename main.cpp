#include <iostream>
#include "narrator.hpp"
#include "player.cpp"

int main()
{
    Narrator bmo("Narrator");
    Player p1(bmo.welcome());
    bmo.introduction();

}
