#include <iostream>
#include <conio.h>
#include <random>
#include <ctime>
#include "enemies.h"
#include "variables.h"
#include "cards.h"
#include "Sprites.h"
#include <vector>
#include  "drawdeck.h"
#include "map.h"
using namespace std;

vector<Cards> hand = {Attack, Attack, Attack, Block, Block};
vector<Cards> discard = {Attack, Attack, Attack, Block, Block};
vector<Cards> dp = {Attack, Attack, Attack, Block, Block};
int rand_options =  3;//outside for now, so select_random works
Map mp;

int turns(){
    if (getch() == 13) {
        turn_num++;
        //cout << turn_num << endl;
        return turn_num;
    
    }
    else if(getch()==99){
        //displayCards();
        cout<< "hey";
    }

    else if(getch()==100){
    //;
    }

    else{
        cout << "Please type enter to end your turn";
    }
    return turn_num;

}

void display_deck(){
    // put the for loop in the main section
    for (int i = 0; i < hand.size();i++){
        hand[i].display();
    }
}

void select_random(){
    srand(time(NULL));
    int rand_chance = (rand() % 99) + 1;
    vector<Map> options = {};

    for (int i = 0; i <= rand_options; i++){
        if (rand_chance <= 15){
            options.push_back(mp.Campfire);
            
        }    

        // else if( rand_chance > 15 && rand_chance <= 30){
        //     options.push_back(mp.campfire);
        // }

        // else if( rand_chance > 30 && rand_chance <= 40){
        //     options.push_back(mp.campfire);
        // }

        // else if( rand_chance > 40 && rand_chance <= 100){
        //     options.push_back(mp.campfire);
        // }

    }
}

// int main() {
//     cout << "Welcome to dungeon fighter" << endl;

//     int total_travel = 1;
//     srand(time(NULL));
//     int rand_options = rand() % 4;
//     cout << "You have " << rand_options + 1 << " paths to choose from \n";
    


//     while (player_health > 0){
//         turns();

//         if (turn_num % 2 == 0){
//             Slime.enemy_attack();
            
//             cout << "Your health is... " << player_health << endl;
//         }

//         else {
//             "You did 5 damage";
//             Slime.Health -= 5;
//             cout << Slime.Health << endl;
//         }
        
//     }

//     if (player_health <= 0){
//         cout << "GAME OVER!";
//     }




// }




