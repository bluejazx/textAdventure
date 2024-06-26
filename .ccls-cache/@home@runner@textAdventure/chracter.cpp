#include "character.hpp"
#include <iostream>
#include <vector>

Character::Character()
{
  strength = 0;
  perception = 0;
  endurance = 0;
  charisma = 0;
  intellegience = 0;
  agility = 0;
  luck = 0;
}

//totals the characters stats
int stat_total()
{
  int total = (strength + perception + endurance + charisma + intellegience + agility + luck );
  return total;
}