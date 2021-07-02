#include "main.h"
#include "function.h"


using namespace std;


int main() {
  string challenger;
  cout << "Welcome to Boss Simulator TM" << endl;
  cout << "Please type your name:: ";
  cin >> challenger;
  cout << "Welcome " << challenger << ", your battle is now starting." << endl;
  chrono::seconds dura( 1);
  this_thread::sleep_for( dura );
  srand(time(NULL));
  int type = (rand() % 3) + 1;
	cout << "BOSS Selected:";
  boss(type);

  int playerHealth = 50;
  int playerDefend = 0;
  
  while (playerHealth > 0) {
      if (type == 1) {
      int kermitHealth = 10;
      char attack;
      cout << "Kermit has 10 health, a minimum damage of 1 and a maximum of 7" << endl;
      
      while (kermitHealth > 0) {
        cout << "Select you attack!" << endl;
        cout << "H to hit" << endl;
        cout << "C to cast a spell" << endl;
        cout << "D to defend" << endl;
        cin >> attack;

        if (attack == 'H') {
          srand(time(NULL));
          int playerDamage = (rand() % 15) + 1;

          cout << challenger << " has hit Kermit for " << playerDamage << " hit points!" << endl;
          kermitHealth -= playerDamage;
          cout << "Kermit now has a remaining " << kermitHealth << " health." << endl;
          chrono::seconds dura( 1);
          this_thread::sleep_for( dura );
        } else if (attack == 'C') {
          srand(time(NULL));
          int playerDamage = (rand() % 15) + 1;

          cout << challenger << " has casted a spell of Ice Spikes hitting Kermit for " << playerDamage << " hit points!" << endl;
          kermitHealth -= playerDamage;
          cout << "Kermit now has a remaining " << kermitHealth << " health." << endl;
          chrono::seconds dura( 1);
          this_thread::sleep_for( dura );

        } else {
          srand(time(NULL));
          playerDefend = (rand() % 5) + 1;
          cout << challenger << " has defended themselves for " << playerDefend << " health!" << endl;
          chrono::seconds dura( 1);
          this_thread::sleep_for( dura );
        }

        if (kermitHealth > 0) {
            continue;
          } 
          cout << "KERMIT HAS BEEN DEFEATED. Good Job!" << endl;
          break;

        if (playerHealth < 0) {
          cout << challenger << " has been defeated!";
          break;
        }

        cout << "Its now Kermits turn!" << endl;
          srand(time(NULL));
          int kermitDamage = (rand() % 7) + 1;
          kermitDamage -= playerDefend;
          chrono::seconds dura( 1);
          this_thread::sleep_for( dura );
          cout << "Kermit has hit you for " << kermitDamage << " hit points!" << endl;
          playerHealth -= kermitDamage;
          cout << "Your remaining health is " << playerHealth << endl;
          
          playerDefend = 0;
        
          if (kermitHealth > 0) {
            continue;
          } 
          cout << "KERMIT HAS BEEN DEFEATED. Good Job!" << endl;
          break;

          if (playerHealth < 0) {
          cout << challenger << " has been defeated!";
          break;
        }
         

      } break;
      

      //TUX battle
    } else if (type == 2) {
      int TuxHealth = 25;
      char attack;
      cout << "Tux has 25 health, a minimum damage of 5 and a maximum of 14" << endl;
      
      while (TuxHealth > 0) {
        cout << "Select you attack!" << endl;
        cout << "H to hit" << endl;
        cout << "C to cast a spell" << endl;
        cout << "D to defend" << endl;
        cin >> attack;

        if (attack == 'H') {
          srand(time(NULL));
          int playerDamage = (rand() % 15) + 1;

          cout << challenger << " has hit Tux for " << playerDamage << " hit points!" << endl;
          TuxHealth -= playerDamage;
          cout << "Tux now has a remaining " << TuxHealth << " health." << endl;
          chrono::seconds dura( 1);
          this_thread::sleep_for( dura );
        } else if (attack == 'C') {
          srand(time(NULL));
          int playerDamage = (rand() % 15) + 1;

          cout << challenger << " has casted a spell of Earth Slam, slamming Tux for " << playerDamage << " hit points!" << endl;
          TuxHealth -= playerDamage;
          cout << "Tux now has a remaining " << TuxHealth << " health." << endl;
          chrono::seconds dura( 1);
          this_thread::sleep_for( dura );

        } else {
          srand(time(NULL));
          playerDefend = (rand() % 5) + 1;
          cout << challenger << " has defended themselves for " << playerDefend << " health!" << endl;
          chrono::seconds dura( 1);
          this_thread::sleep_for( dura );
        }

      

         if (playerHealth < 0) {
          cout << challenger << " has been defeated!";
          break;
        }
        if (TuxHealth > 0) {
            continue;
          } 
          cout << "TUX HAS BEEN DEFEATED. Good Job!" << endl;
          break;

        cout << "Its now Tux's turn!" << endl;
          
          int tuxDamage = (rand() % 9) + 5;
          tuxDamage -= playerDefend;
          chrono::seconds dura( 1);
          this_thread::sleep_for( dura );
          cout << "Tux has hit you for " << tuxDamage << " hit points!" << endl;
          playerHealth -= tuxDamage;
          cout << "Your remaining health is " << playerHealth << endl;
          
          playerDefend = 0;

          if (TuxHealth > 0) {
            continue;
          } 
          cout << "TUX HAS BEEN DEFEATED. Good Job!" << endl;
          break;

          if (playerHealth < 0) {
          cout << challenger << " has been defeated!";
          break;
        }
         

      } break;
      
    } else if (type == 3) {
      int ReaperHealth = 50;
      char attack;
      cout << "Reaper has 50 health, a minimum damage of 2 and a maximum of 25" << endl;
      
      while (ReaperHealth > 0) {
        cout << "Select you attack!" << endl;
        cout << "H to hit" << endl;
        cout << "C to cast a spell" << endl;
        cout << "D to defend" << endl;
        cin >> attack;

        if (attack == 'H') {
          srand(time(NULL));
          int playerDamage = (rand() % 15) + 1;

          cout << challenger << " has hit Reaper for " << playerDamage << " hit points!" << endl;
          ReaperHealth -= playerDamage;
          cout << "Reaper now has a remaining " << ReaperHealth << " health." << endl;
          chrono::seconds dura( 1);
          this_thread::sleep_for( dura );
        } else if (attack == 'C') {
          srand(time(NULL));
          int playerDamage = (rand() % 15) + 1;

          cout << challenger << " has casted a spell of Illusion, making Reaper confused and taking " << playerDamage << " hit points!" << endl;
          ReaperHealth -= playerDamage;
          cout << "Reaper now has a remaining " << ReaperHealth << " health." << endl;
          chrono::seconds dura( 1);
          this_thread::sleep_for( dura );

        } else {
          srand(time(NULL));
          playerDefend = (rand() % 5) + 1;
          cout << challenger << " has defended themselves for " << playerDefend << " health!" << endl;
          chrono::seconds dura( 1);
          this_thread::sleep_for( dura );
        }

          
        if (playerHealth < 0) {
          cout << challenger << " has been defeated!";
          break;
        }

        cout << "Its now Reaper's turn!" << endl;
          
          int reaperDamage = (rand() % 23) + 2;
          reaperDamage -= playerDefend;
          chrono::seconds dura( 1);
          this_thread::sleep_for( dura );
          cout << "Reaper has hit you for " << reaperDamage << " hit points!" << endl;
          playerHealth -= reaperDamage;
          cout << "Your remaining health is " << playerHealth << endl;
          
          playerDefend = 0;

          if (ReaperHealth > 0) {
            continue;
          } 
          cout << "REAPER HAS BEEN DEFEATED. Good Job!" << endl;
          break;

          if (playerHealth < 0) {
          cout << challenger << " has been defeated!";
          break;
        }
          
         

        }
    } break;
  }
  
}    


/*
cout << R"(

)" << '\n';
*/