#include <iostream>
#include <conio.h>
#include <random>
#include <ctime>
#include "enemies.h"
#include "variables.h"
#include "cards.h"
using namespace std;

//int player_health = 100;

int turns(){
    
    while (true){
        cout << "type something in ";
        if (getch() == 13) {
            cout << turn_num << endl;
            turn_num++;
        }
    }
}

// int main() {
//     turns();
//     vector<int> test = {1,2,3,4,5};
//     srand(time(0));
//     cout << rand() % 5;


// }

int main(){
    // Cards card = {"Basic Attack |","this attacks", 10, 3, 4};
    // card.display
    card1.display();
}








