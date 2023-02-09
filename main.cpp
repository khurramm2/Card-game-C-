#include <iostream>
#include <conio.h>
#include <random>
#include <ctime>
//#include "enemies.h"
//#include "variables.h"
using namespace std;

//int player_health = 100;
int turn_num = 0;

int turns(){
    while (true){
        cout << "type something in ";
        if (getch() == 13) {
            cout << turn_num << endl;
            turn_num++;
        }
    }
}

int main() {
    //turns();
    // vector<int> test = {1,2,3,4,5};
    // srand(time(0));
    // cout << rand() % 5;

    //player_health = (75);
    // Enemy enemy = {100,{10,12,14,19,18,7},{0,0,0,3,6,8,8}};

    // cout << enemy.enemy_attack();


}









