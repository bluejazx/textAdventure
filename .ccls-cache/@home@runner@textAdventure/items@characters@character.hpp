#include <iostream>
#include <vector>
class Character
{
private:
  //basic stats
  int strength;
  int perception;
  int endurance;
  int charisma;
  int intellegience;
  int agility;
  int luck;

  //vector that  stores any items on the player that they may use later
  std::vector<int> invetory {};


public:
  //constructor
  Character();

  //totals the characters stats
  int stat_total();
};