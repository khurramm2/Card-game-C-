#ifndef ENEMIES
#define ENEMIES
#include "variables.h"

#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <ctime>
using namespace std;

class Enemy{
private:
    bool EnemyDead;
protected:
    string Enemy_sum;
    vector<int> Attack, Block;
public:
    string Name;
    int Health; 

    void setenemydead(bool enemydead){
        EnemyDead = enemydead;
    }
    bool getenemydead(bool enemydead){
        return EnemyDead;
    }
    
    int enemy_attack(){
        //use this when it's the enemy turn
        srand(time(0));
        player_health -= Attack[rand() % Attack.size()];
        return player_health;
    }

    int enemy_block(){
        //use this when it's the enemy turn
        srand(time(0));
        int current_block = Block[rand() % Block.size()];
        return current_block;
    }

    Enemy(string name, int health, vector<int> attack, vector<int> block){
        Name = name;
        Health = health;
        Attack = attack;
        Block = block;
    }
};





// class Enemy_Special:Enemy{
// public:
//     int Poison;
//     int Strength_Scale;
//     int Freeze;

//     Enemy_Special(int health, vector<int> attack, vector<int> block, int poison, int strength_scale, int freeze)
//         :Enemy(health, attack, block)
//     {
//         Poison = poison;
//         Strength_Scale = strength_scale;
//         Freeze = freeze;
//     }

//     int enemy_poison(){
//         player_health - Poison;

//         while (Poison != 0){
//             Poison--;
//         }
//         return player_health;
//     }

//     // int scaling_strength(){
//     //     if turn_num++;{
//     //         Attack = Attack + Strength_Scale;
//     //     }
//     //     return 0;
//     // }

//     int freeze(){
//         if (player_health % 2 == 0){
//             player_health++;
//         }
//         return player_health;
//     }
// };

#endif
