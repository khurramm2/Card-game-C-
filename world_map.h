#ifndef WORLD_MAP
#define WORLD_MAP

#include <iostream>
#include "enemies.h"
#include "variables.h"
#include "cards.h"
#include "Sprites.h"
#include <vector>
#include <random>
#include <ctime>
using namespace std;


class Worldmap{

public:
    int Campfire, Enemy_encounter, Shop, Mystery;

    vector<string> select_random(int rnd){
        vector<string> options = {};
        for (int i = 0; i <= rnd; i++){
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

    int choose_option(){
        int rand_options = rand() % 4;
        int path_num;
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

        cout << endl << "Select a path number: ";
        cin >> path_num;
        return path_num;
    }
    
    int campfire_1(){
        cout << "Aaah... you have found a campfire, looks like you have gained some health!";

        if (player_health < 100){
            player_health +=  + (0.2 * player_health);
        }
        return player_health;
    }

    // void enemy_encounter_1(){
    //     srand(time(NULL));
    //     int rand_chance = (rand() % 99) + 1;

    //     Enemy_list;
    // }

    // void mystery_1(){

    // }

    // void shop_1(){}

};


#endif