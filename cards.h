#ifndef CARDS
#define CARDS

#include <iostream>
#include <vector>
#include <unordered_map>
#include<unordered_set>
#include <conio.h>
#include "enemies.h"
#include "variables.h"
using namespace std;

class Cards{
public:
    string Card_Name, Card_Summary;
    int Damage;
    int Block;
    int Cost;


    void display(){
        cout << Card_Name << "  Damage: "<< Damage <<"  |  Block  " << Block;
    }
    // void display_defend(){
    //     cout << Card_Name <<"  Block  " << Block;
    // }

    // int player_attack(){
    //     enemy.Health -= Damage;
    //     return enemy.Health;   
    //     }

    // int player_block(){
    //     player_health += Block;
    //     return player_health;  
    // }

    Cards(string card_name,string card_summary, int damage, int block, int cost){
        Card_Name = card_name;
        Card_Summary = card_summary;
        Damage = damage;
        Block = block;
        Cost = cost;
    }

};

#endif
