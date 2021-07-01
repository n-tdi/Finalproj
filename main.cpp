#include "main.h"
#include "function.h"


using namespace std;


int main() {
  srand(time(NULL));
  int type = (rand() % 3) + 1;
	cout << "BOSS Selected:";
  boss(type);

  int playerHealth = 50;
  int playerDefend;
  

  if (type == 1) {
    int health = 10;
    char attack;
    cout << "Kermit has 10 health, a minimum damage of 1 and a maximum of 7" << endl;
    
    while (health > 0) {
      cout << "Select you attack!" << endl;
      cout << "H to hit" << endl;
      cout << "C to cast a spell" << endl;
      cout << "D to defend" << endl;
      cin >> attack;

      if (attack == 'H') {
        srand(time(NULL));
        int playerDamage = (rand() % 15) + 1;

        cout << "The Challenger has hit Kermit for " << playerDamage << " hit points!" << endl;
        health -= playerDamage;

      } else if (attack == 'C') {
        srand(time(NULL));
        int playerDamage = (rand() % 15) + 1;

        cout << "The Challenger has casted a spell of Ice Spikes hitting Kermit for " << playerDamage << " hit points!" << endl;
        health -= playerDamage;

      } else {
        srand(time(NULL));
        playerDefend = (rand() % 5) + 1;
        cout << "The Challegnder has defended themselves for " << playerDefend << " health!" << endl;

      }

      cout << "Its now Kermits turn!" << endl;
        srand(time(NULL));
        int kermitDamage = (rand() % 7) + 1;
        kermitDamage -= playerDefend;

        cout << "Kermit has hit you for " << kermitDamage << " hit points!";
      
    }
  }
}

/*
cout << R"(

)" << '\n';
*/