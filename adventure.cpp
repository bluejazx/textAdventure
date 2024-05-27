#include <iostream>

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
  int statTotal =(strength + perception + endurance + charisma + intellegience + agility + luck );

  //Theplayer chracter choice influences starting items
  std::string playerCharacter;

  //variables for player items
  int gold;
  std::string weapon;

  //tracks player score and high score
  int playerscore;
  int highScore;
  
  //Main Menu
  //ask the player what kind of adventure they want to embark on infinite or quest
  std::cout << "How Do you wish to adventure: \n";
  std::cout << " 1.Endless\n";
  std::cout << " 2.Quest\n";
  
  //give player  basic information if they need it
  std::cout << " 3.Info\n";

  //gets player answer
  std::cout << "enter the number of the option you choose: \n";
  std::cin >> playerAnswer;

  //Displays custom message based on playe choice

  //sets mode to infinitee
  if(playerAnswer == 1)
  {
    infinite = true;
  }

  //sets mode to quest
  else if(playerAnswer == 2)
  {
    quest = true;
  }

  //sends player to  information screen
  else if(playerAnswer == 3)
  {
    std::cout << "This is a text based adevture game where you enter the number of choice you wish to select. \n";
    std::cout << "The only ting saved betwenn adventure is the gold you had upon your return and the unlocks you had";
    std::cout << "You have the current adventuring options unlocked: \n";
    std::cout << " 1.Endless\n";
    std::cout << " 2.Quest\n";
    std::cout << "In The Endless adeventure you will be able to  embark on an adventure endlessly with numerous senarios try to obtain the highest score you can by staying alive to tell the tale";
    std::cout << "In The Quest mode you will embark on an adeventure where you recieve a quest and be able to complete the quest by completing quest goals the more you complete the more youll unlock";
    std::cout << "If you are finshed reading enter 1 to continue back to the orginal menu";
    std::cin >> playerAnswer;
    
    //Return player to main menu
    if(playerAnswer == 1)
    {
      std::cout << "How Do you wish to adventure: \n";

      //sets adventure mode
      std::cout << " 1.Endless\n";
      std::cout << " 2.Quest\n";

      //gives player  basic information if they need it
      std::cout << " 3.Info\n";

      //gets player answer
      std::cout << "enter the number of the option you choose: \n";
      std::cin >> playerAnswer;
    }
      
    //Displays Error message and Re-deisplays previous message upon invalid selection
    else
    {
      while(playerAnswer != 1)
        {
          std::cout << "ERROR It appears you entered an invalid option please try again.\n";
          std::cout << "\nThis is a text based adevture game where you enter the number of choice you wish to select. \n";
          std::cout << "The only ting saved betwenn adventure is the gold you had upon your return and the unlocks you had";
          std::cout << "You have the current adventuring options unlocked: \n";
          std::cout << " 1.Endless\n";
          std::cout << " 2.Quest\n";
          std::cout << "In The Endless adeventure you will be able to  embark on an adventure endlessly with numerous senarios try to obtain the highest score you can by staying alive to tell the tale";
          std::cout << "In The Quest mode you will embark on an adeventure where you recieve a quest and be able to complete the quest by completing quest goals the more you complete the more youll unlock";
          std::cout << "If you are finshed reading and uderstand enter 1 to continue back to the orginal menu";
          std::cin >> playerAnswer;
        }
    } 
  }
  //Displays Error message and Re-deisplays previous message upon invalid selection
  else
  {
    while(playerAnswer != 1 && playerAnswer != 2 && playerAnswer != 3)
    {
      std::cout << "ERROR It appears you entered an invalid option please try again.\n";
      std::cout << "\nHow Do you wish to adventure: \n";
      std::cout << " 1.Endless\n";
      std::cout << " 2.Quest\n";
      std::cout << " 3.Info\n";
      std::cout << "enter the number of the option you choose: \n";
      std::cin >> playerAnswer;
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