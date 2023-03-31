#ifndef ENEMIES
#define ENEMIES
#include "variables.h"
#include "Player.h"
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
    int Health; 
public:
    string Name;
    int Been_Poisoned;
    

    void setenemydead(bool enemydead){
        EnemyDead = enemydead;
    }
    bool getenemydead(bool enemydead){
        return EnemyDead;
    }

    int getHealth(){
        return Health;
    }
    
    int enemy_attack(int health){
        //use this when it's the enemy turn
        srand(time(0));
        int rand_attack = Attack[rand() % Attack.size()];
        health -= rand_attack;

        cout << endl << "The enemy attacked for " << rand_attack << " damage \n";
        return health;
    }

    int enemy_block(){
        //use this when it's the enemy turn
        srand(time(0));
        int current_block = Block[rand() % Block.size()];
        return current_block;
    }

    

    int has_been_poisoned(int hp){
        hp -= Been_Poisoned;
        
        if (Been_Poisoned > 0 ){
            Been_Poisoned -= 1;
        }

        cout << endl << "Enemy took: " << Been_Poisoned << " Poison Damage \n"; 
        
        return hp;
    }

    Enemy(string name, int health, vector<int> attack, vector<int> block) : Been_Poisoned(0){
        Name = name;
        Health = health;
        Attack = attack;
        Block = block;
    }
};





class Enemy_Special:Enemy{
public:
    int Poison;
    int Strength_Scale;
    int Freeze;

    Enemy_Special(string name, int health, vector<int> attack, vector<int> block, int poison, int strength_scale)
        :Enemy(name, health, attack, block)
    {
        Poison = poison;
        Strength_Scale = strength_scale;
    }

    int enemy_poison(){
        player_health - Poison;

        while (Poison != 0){
            Poison--;
        }
        return player_health;
    }

    int scaling_strength(){
        for (int nums: Attack){
            Attack[nums] +=Strength_Scale;
        }
        return 0;
    }

    // int freeze(){
    //     if (player_health % 2 == 0){
    //         player_health++;
    //     }
    //     return player_health;
    // }
};

#endif
