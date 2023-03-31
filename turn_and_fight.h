#ifndef TURN_AND_FIGHT
#define TURN_AND_FIGHT

#include <iostream>
#include <vector>
#include <random>
#include <unordered_set>
#include <set>
#include <map>
#include <chrono>
#include <thread>
#include <ctime>
#include "enemies.h"
#include "variables.h"
#include "cards.h"
#include "Sprites.h"
#include  "drawdeck.h"

int turns(){
    if (getch() == 13) {
        turn_num++;
        return turn_num;
    
    }

    else{
        cout << "Please type enter to end your turn";
    }
    return turn_num;
}


void display_deck(){
    int n = 0;

    map<int, char> letter_store = {{1,'q'}, {2,'w'},{3,'e'},{4,'r'},{5,'t'}};

    for (const auto& [key, value] : letter_store){
        cout << endl << value << " : ";
        hand[n].display();
        cout << endl;
        n++;
    }
    
}


int card_selection(int health){
    unordered_set<char> user_store;
    string input;
    bool enough_energy = false;
    int total_cost = 0;

    while (!enough_energy) {
        cout << "Enter card selection (q,w,e,r,t): ";
        cin >> input;
        
        for (char c : input) {
            user_store.insert(c);
        }

        for (char c: user_store){
            switch (c) {
            case 'q':
                total_cost += hand[0].Cost;
            break;
            case 'w':
                total_cost += hand[1].Cost;
            break;
            case 'e':
                total_cost += hand[2].Cost;
            break;
            case 'r':
                total_cost += hand[3].Cost;
            break;
            case 't':
                total_cost += hand[4].Cost;
            break;
            }
        }

        if (energy - total_cost >= 0) {
            enough_energy = true;
        }
        else {
            cout << "Not enough energy! Please try again." << endl;
            user_store.clear();
            total_cost = 0;
        }
    }

    unordered_map<char, int> card_index = {
        {'q', 0},
        {'w', 1},
        {'e', 2},
        {'r', 3},
        {'t', 4}
    };

    for (char c : user_store) {
        if (hand[card_index[c]].Card_Name == "Poison Attack"){
            enemy_poisoned_bool = true;
        }
        health = hand[card_index[c]].player_attack(health);
        fixed_block +=  hand[card_index[c]].Block;
        energy -= hand[card_index[c]].Cost;
    }

    return health;
}



int Enemyfight(){
    int rand_options = rand() % (Enemy_list.size());
    cout << "You have encountered " << Enemy_list[rand_options].Name << endl;
    int enemy_health = Enemy_list[rand_options].getHealth();

    while (enemy_health >= 0){
        if (drawpile.size() <5){
            shuffle(drawpile, discard);
        }
        
        if (turn_num % 2 == 0){
            fixed_block = Enemy_list[rand_options].enemy_attack(fixed_block);
            if (fixed_block < 0){
                player_health += fixed_block;
            }
            cout << endl << "Your health is... " << player_health << endl;
            draw_function(hand, drawpile);
            this_thread::sleep_for(chrono::milliseconds(800));
            fixed_block = 0;
            turn_num++;
        }

        else {
            energy = 3;
            display_deck();
            cout << endl;
            enemy_health = card_selection(enemy_health);

            if (fixed_block > 0){
                cout << endl << "You gained: " << fixed_block << " block \n";
            }

            if (enemy_poisoned_bool == true){
                Enemy_list[rand_options].Been_Poisoned += Poison_Attack.Poison;
            }

            if (Enemy_list[rand_options].Been_Poisoned > 0){
                enemy_health = Enemy_list[rand_options].has_been_poisoned(enemy_health);
                
            }

            cout << endl << "enemy health is "<< enemy_health << endl;
            emptycurrenthand(hand, discard);
            this_thread::sleep_for(chrono::milliseconds(800));
            turn_num++;
            
            
        }

        if (enemy_health <= 0){
            return 0;
        }
    }


    turn_num = 0;
    return 0;
}




#endif
