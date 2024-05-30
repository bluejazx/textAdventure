#include <iostream>
#include <vector>

//totals the players stats
int stat_total(int strength, int perception, int endurance, int charisma, int intellegience, int agility, int luck )
{
  int total = (strength + perception + endurance + charisma + intellegience + agility + luck );
  return total;
}

//allows the player to name things
std::string name()
{
  std::string new_name;
  std::cout << "Enter the name you desire: \n";
  std::cin >> new_name;
  return new_name;
}

// gets the player choice out of a numbere list 
int player_option()
{
  int player_Answer;
  std::cout << "Enter the number of the option you choose: \n";
  std::cin >> player_Answer;
  return player_Answer;
}

//Prints menu
void print_menu(std::vector <std::string> menu_options)
{
  //prints each item stored in menu vector
  for(int i = 0;  i < menu_options.size(); i++)
    {
      std::cout << menu_options[i];
    }
}

//Prints basic information
void help()
{
  std::cout << "This is a text based adevture game where you enter the number of choice you wish to select. \n";
  std::cout << "The only ting saved betwenn adventure is the gold you had upon your return and the unlocks you had. \n";
  std::cout << "If you are finshed reading enter 1 to continue back to the orginal menu";
}

//Ask the player what mode the want to play on
void what_mode()
{
  std::cout << "How Do you wish to adventure: \n";
}

//Generic error message
void error()
{
  std::cout << "It appears you have made an incorrect entry please tey agian";
}

int main()
{
  //Setup
  //variable for player to make decisions and continue adventuring
  int playerHealth = 20;
  int playerAnswer;

  //For infinite mode only
  //option porvided at the end of chapters to stop recording player score
  bool adventure = true;
  //set to true triggering adventure when player says they want to do infinite adventure
  bool infinite;
  //stores the choice the player gives when prompted 
  int choice;
  
  //For quest mode only
  //set to true triggering adventure when player says they want to quest
  bool quest;
  std::string goal;
  int completedQuest = 0;
  

  //basic player skill points and Total
  int strength;
  int perception;
  int endurance;
  int charisma;
  int intellegience;
  int agility;
  int luck;

  //Theplayer chracter choice influences starting items
  std::string playerCharacter;

  //variables for player items
  int gold;
  std::string weapon;

  //tracks player score and high score
  int playerscore;
  int highScore;

  //Vectors of Menus
  //Main Menu
  std::vector <std::string> modes = {" 1.Endless\n", " 2.Quest\n", " 3.Help and Info\n"};
  //Help and Information
  
  //Provides the player with the main menu
  what_mode();
  print_menu(modes);
  //gets player answer
  
  
  //Displays custom message based on playe choice
  //sets mode to infinitee
  if(choice == 1)
  {
    infinite = true;
  }

  //sets mode to quest
  else if(choice == 2)
  {
    quest = true;
  }

  //sends player to  information screen
  else if(choice == 3)
  {
    //provides basic explenation of the game
    help();
    choice = player_option();
    //Return player to main menu
    if(choice == 1)
    {
      what_mode();
      print_menu(modes);
      //gets player answer
      choice = player_option();
    }
      
    //Displays Error message and Re-deisplays previous message upon invalid selection
    else
    {
      while(choice != 1)
        {
          error();
          what_mode();
          print_menu(modes);
          choice = player_option();
        }
    } 
  }
  //Displays Error message and Re-deisplays previous message upon invalid selection
  else
  {
    while(choice != 1 && choice != 2 && choice != 3)
    {
      error();
      what_mode();
      print_menu(modes);
      choice = player_option();
    }
  }

  //Character select
  
  
  /* //Infinite mode only
  //loop to continue the adventure while player health is > 0 and player wants to continue and mode is infinte
  while((playerHealth > 0) && (adventure  == true) && (infinite == true))
    {
      //generates a pseudorandom number for 10 possible cases for player senarios
      srand (time(NULL));
      int senarioNum = rand() % 10;

      //posible senarios
      switch(senarioNum)
        {
          
        }
    } */
}