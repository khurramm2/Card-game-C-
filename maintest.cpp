#include <iostream>
#include <conio.h>
#include <random>
#include <ctime>
#include "enemies.h"
#include "variables.h"
#include "cards.h"
#include "Sprites.h"
#include "drawdeck.h"
using namespace std;

//int player_health = 100;

int turns(){
    //cout << "type something in ";
    if (getch() == 13) {
        turn_num++;
        //cout << turn_num << endl;
        return turn_num;
    
    }
    else if(getch()==99){
        cout << "asdfyasfa";
        // vector<int>currenthand;
        // for(int a;a<current.size();a++){
        //     cout <<currenthand[a] << " ";
    }

    else if(getch()==100){
    //;
    }

    else{
        cout << "Please type enter to end your turn";
    }
    return turn_num;
}

//when it's your turn remove 5 cards from the drawpile and add it to your current hand
//when it's enemy's turn remove 5 cards from your current hand and add it to your discardpile
//When there are less than 5 cards in the dawpile shuffle the cards



int main() {
    // cout << "Welcome to dungeon fighter" << endl;
    cout << "You have encountered an enemy \n";
    int i = 0;
    while (true){
        turns();
        

        if (turn_num % 2 == 0){
            slime.enemy_attack();
            cout << "Your health is... " << player_health << endl;
            // while (i < currenthand.size()){
            //     currenthand.pop_back();
            //     discard.insert(currenthand.end());
            //     i++;
            // }
            
            
        }

        else {
            
            //draw1(drawpile);
            drawpile = draw1(drawpile);
            cout << 1 << endl;
            
            if (drawpile.size()<=4){
                shuffle(discard);

            }
            // "You did 5 damage";
            // slime.Health -= 5;
            // cout << slime.Health << endl;
        }
        
    }
    
    

}



// int main(){
//     // Cards card = {"Basic Attack |","this attacks", 10, 3, 4};
//     // card.display();


//     Block.display();
//     }




// vector<int> test = {1,2,3,4,5};
// srand(time(0));
// cout << rand() % 5;



