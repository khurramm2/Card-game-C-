#ifndef MAP
#define MAP

#include <iostream>
#include "enemies.h"
#include "variables.h"
#include "cards.h"
#include "Sprites.h"
#include <vector>
#include <random>
#include <ctime>
using namespace std;


class Map{

public:
    int Campfire, Enemy_encounter, Shop, Mystery;
    
    int campfire_1(){
        cout << "Aaah... you have found a campfire, looks like you have gained some health!";

        if (player_health < 100){
            player_health +=  + (0.2 * player_health);
        }
        return player_health;
    }

    void enemy_encounter_1(){
        srand(time(NULL));
        int rand_chance = (rand() % 99) + 1;

        Enemy_list;
    }

    void mystery_1(){

    }

    void shop_1(){}

};



#endif