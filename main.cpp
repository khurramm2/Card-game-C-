#include <iostream>
#include <conio.h>
#include <random>
#include <ctime>
#include "enemies.h"
#include "variables.h"
#include "cards.h"
#include "Sprites.h"
#include <vector>
using namespace std;

//player_health = 100;

int turns(){
    //cout << "type something in ";
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

//note in the child classes I cannot access the constructor variables.

vector<string> hand = {Attack.Card_Name, Attack.Card_Name, Attack.Card_Name, Block.Card_Name, Block.Card_Name};
int main() {
    // cout << "Welcome to dungeon fighter" << endl;
    // cout << "You have encountered an enemy \n";

    // while (true){
    //     turns();

    //     if (turn_num % 2 == 0){
    //         slime.enemy_attack();
            
    //         cout << "Your health is... " << player_health << endl;
    //     }

    //     else {
    //         "You did 5 damage";
    //         slime.Health -= 5;
    //         cout << slime.Health << endl;
    //     }
        
    // }
    
    
    //cout << player_health;
    Cards_Curse nullcurse = {"curse", "does nothing", 0, 0};
    cout << nullcurse.Card_Name;

}




