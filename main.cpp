#include <iostream>
#include "narrator.hpp"
#include "player.hpp"

int main()
{
    Narrator bmo("Narrator");
    Player p1(bmo.welcome());
    bmo.introduction();

}
