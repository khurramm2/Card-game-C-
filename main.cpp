#include <iostream>
#include "enemies.h"
#include "variables.h"
#include "cards.h"
#include "Sprites.h"
#include  "drawdeck.h"
#include "world_map.h"
#include "turn_and_fight.h"
using namespace std;

int main() {
    cout << "Welcome to dungeon fighter" << endl;
    Worldmap map_1;
    srand(time(NULL));
    
    while (player_health >= 0){
        int input_option;
        map_1.choose_option();
        cout <<  endl << "type in enter" << endl;
        cout<< endl;
        Enemyfight();
        cout << endl << "Congratulations you have defeated the enemy!";
        cout << endl;

    }
    
    if (player_health <= 0){
        cout << "GAME OVER!";
    }

}




