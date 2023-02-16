#include <iostream>
#include <conio.h>
#include <random>
#include <ctime>
#include "enemies.h"
#include "variables.h"
#include "cards.h"
using namespace std;

//int player_health = 100;
vector<int> test
int turns(){
    cout << "type something in ";
    if (getch() == 13) {
        turn_num++;
        cout << turn_num << endl;
        return turn_num;
    
    }
    else if(getch()==99){
        displayCards();
    }
    else{
        cout << "Please type enter to end your turn";
    }
    return turn_num;
}


// int main() {
//     while (true){
//         turns();

//         if (turn_num % 2 == 0){
//             cout << "hey" << endl;
//         }

//         else {
//             cout << "bye" << endl;
//         }

//     }

// }




// int main(){
//     // Cards card = {"Basic Attack |","this attacks", 10, 3, 4};
//     // card.display();


//     Block.display();
//     }




// vector<int> test = {1,2,3,4,5};
// srand(time(0));
// cout << rand() % 5;



