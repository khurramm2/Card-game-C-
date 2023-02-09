#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <random>
#include <ctime>
using namespace std;


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
        //use this when it's the enemy turn
        srand(time(0));
        player_health -= Attack[rand() % Attack.size()];
        return 0;
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


