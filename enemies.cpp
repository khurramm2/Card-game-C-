#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include "turns.h"
using namespace std;

class Enemy{
private:
    int Health;
    bool EnemyDead;
protected:
    string Enemy_sum;
    int Attack, Block;

public:
    int player_health = 100; // change this to another class soon

    void sethealth(int health){
        Health = health;
    }
    int gethealth(int health){
        return Health;
    }

    void setenemydead(bool enemydead){
        if (Health <=0){
            EnemyDead = true;
        }
    }
    bool getenemydead(bool enemydead){
        return EnemyDead;
    }

    int enemy_attack(){
        if (game_turn % 2)
    }


    Enemy(int health, int attack, int block){
        Health = health;
        Attack = attack;
        Block = block;
    }
};



int main(){

    return 2;
}