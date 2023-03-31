#ifndef CARDS
#define CARDS

#include <iostream>
#include <vector>
#include <unordered_map>
#include<unordered_set>
#include <conio.h>
#include "enemies.h"
#include "variables.h"
#include "Player.h"
using namespace std;

class Cards{
public:
    string Card_Name, Card_Summary;
    int Damage;
    int Block;
    int Cost;


    void display(){
        cout << Card_Name << "  Damage: "<< Damage <<"  Block: " << Block << "  Cost: " << Cost;
    }


    int player_attack(int health){
        health -= Damage;
        return health;
    }


    Cards(string card_name,string card_summary, int damage, int block, int cost){
        Card_Name = card_name;
        Card_Summary = card_summary;
        Damage = damage;
        Block = block;
        Cost = cost;
    }

};


class Cards_Special : public Cards{
public:
    int Poison;
    int Metallic;
    int Energy;
    Cards_Special(string card_name,string card_summary, int damage, int block, int cost, int poison, int metallic)
        :Cards(card_name, card_summary, damage, block, cost)
    {
        Poison = poison;
        Metallic = metallic;
    }

    void poison_attack(Enemy enemy){        
        enemy.Been_Poisoned = Poison;
    }
    
};


// class Cards_Curse : Cards{
// public:
//     int Weak, Damage, Energy_Loss;
//     Cards_Curse(string card_name,string card_summary, int weak, int energy_loss)
//         :Cards(card_name, card_summary, 0, 0, 0)
//     {
//         Weak = weak;
//         Energy_Loss = energy_loss;
//     }
    

// };





#endif
