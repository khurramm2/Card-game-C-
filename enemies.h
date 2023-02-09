#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <ctime>
#include "variables.h"
using namespace std;

variables var;

//change this file to .h
//edit the player_health variable
class Enemy{
private:
    int Health;  //enemy health
    bool EnemyDead;
protected:
    string Enemy_sum;
    vector<int> Attack, Block;

public:
    int player_health = var.player_health;
     // change this to another class soon

    void sethealth(int health){
        Health = health;
    }
    int gethealth(int health){
        return Health;
    }
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



    Enemy(int health, vector<int> attack, vector<int> block){
        Health = health;
        Attack = attack;
        Block = block;
    }
};
