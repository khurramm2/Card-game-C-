#include <iostream>
#include <conio.h>
#include <random>
#include <ctime>
#include "enemies.h"
#include "variables.h"
#include "cards.h"
#include "Sprites.h"
using namespace std;

int player_health = 100;

int turns(){
    //cout << "type something in ";
    if (getch() == 13) {
        turn_num++;
        //cout << turn_num << endl;
        return turn_num;
        
    }
    else{
        cout << "Please type enter to end your turn";
    }
    return turn_num;
}



vector<string> hand = {Attack.Card_Name, Attack.Card_Name, Attack.Card_Name, Block.Card_Name, Block.Card_Name};
int main() {
    cout << "Welcome to dungeon fighter" << endl;
    cout << "You have encountered an enemy \n";

    while (true){
        turns();

        if (turn_num % 2 == 0){
            slime.enemy_attack();
            cout << "Your health is... " << player_health << endl;
        }

        else {
            "You did 5 damage";
            slime.Health -= 5;
            cout << slime.Health << endl;
        }
        
    }

    
     for (string nums: hand){
        cout << nums;
     }

    // vector<Cards> test = {Attack, Attack, Attack, Block, Block};
    // cout << test[0];
    

}



// int main(){
//     Cards card = {"Basic Attack |","this attacks", 10, 3, 4};
//     card.display();

//     vector<int> test = {1,2,3,4,5};
//     srand(time(0));
//     cout << rand() % 5;

// }

