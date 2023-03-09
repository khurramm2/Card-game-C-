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
vector<Cards> drawpile = {Attack, Attack, Attack, Block, Block};


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

vector<string> select_random(int rnd){
    vector<string> options = {};
    for (int i = 0; i <= rnd; i++){
        //srand(time(NULL));
        int rand_chance = (rand() % 99) + 1;
        if (rand_chance <= 15){
            options.push_back("Campfire");
            
        }    
        else if( rand_chance > 15 && rand_chance <= 30){
            options.push_back("Shop");
        }
        else if( rand_chance > 30 && rand_chance <= 40){
            options.push_back("Mystery choice");
        }
        else if( rand_chance > 40 && rand_chance <= 100){
            options.push_back("Enemy");
        }
    }

    return options;
}

int main() {
    cout << "Welcome to dungeon fighter" << endl;
    
    int total_travel = 1;
    srand(time(NULL));
    int rand_options = rand() % 4;


    if (rand_options == 0){
    cout << "You have " << rand_options + 1 << " path to choose from: \n";
    }
    else{
        cout << "You have " << rand_options + 1 << " paths to choose from, type in the number corresponding to the path you choose: \n" << endl;
    }

    vector<string> options = select_random(rand_options);

    for (int i = 0; i < options.size(); i++) {
        cout << options[i] << ": " << i << endl;
    }


    cout <<  "type in enter";
    
    while (player_health > 0){
        turns();
        if (turn_num % 2 == 0){
            Slime.enemy_attack();
            
            cout << "Your health is... " << player_health << endl;
        }

        else {
            "You did 5 damage";
            Slime.Health -= 5;
            cout << Slime.Health << endl;
        }
        
    }

    if (player_health <= 0){
        cout << "GAME OVER!";
    }




}




