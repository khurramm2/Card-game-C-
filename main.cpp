#include <iostream>
#include <vector>
#include <conio.h>
#include <random>
#include <unordered_set>
#include <set>
#include <map>
#include <chrono>
#include <thread>
#include <ctime>
#include "enemies.h"
#include "variables.h"
#include "cards.h"
#include "Sprites.h"
#include  "drawdeck.h"
#include "map.h"

using namespace std;

vector<Cards> hand = {Attack, Attack, Attack, Block, Block};
vector<Cards> discard = {};
vector<Cards> drawpile = {Heavy_Attack, Attack, Dash_Strike, Block, Block};

void display_deck(){
    int n = 0;

    map<int, char> letter_store = {{1,'q'}, {2,'w'},{3,'e'},{4,'r'},{5,'t'}};

    for (const auto& [key, value] : letter_store){
        cout << endl << value << " : ";
        hand[n].display();
        cout << endl;
        n++;
    }
    
}

int turns(){
    if (getch() == 13) {
        turn_num++;
        return turn_num;
    
    }

    else{
        cout << "Please type enter to end your turn";
    }
    return turn_num;
}

vector<string> select_random(int rnd){
    vector<string> options = {};
    for (int i = 0; i <= rnd; i++){
        int rand_chance = (rand() % 99) + 1;
        if (rand_chance <= 15){
            options.push_back("Campfire");
            
        }    
        else if( rand_chance > 15 && rand_chance <= 30){
            options.push_back("Shop");
        }
        else if( rand_chance > 30 && rand_chance <= 40){
            options.push_back("Mystery choice");
        }
        else if( rand_chance > 40 && rand_chance <= 100){
            options.push_back("Enemy");
        }
    }

    return options;
}

void choose_option(){
    int rand_options = rand() % 4;
    if (rand_options == 0){
        cout << "You have " << rand_options + 1 << " path to choose from: \n";
    }
    else{
        cout << "You have " << rand_options + 1 << " paths to choose from, type in the number corresponding to the path you choose: \n" << endl;
    }

    vector<string> options = select_random(rand_options);

    for (int i = 0; i < options.size(); i++) {
        cout << options[i] << ": " << i << endl;
    }
}

int card_selection(int& health){
   unordered_set<char> user_store;
   string input;
   cin >> input;
   char c;

   for (char c : input) {
      user_store.insert(c);
   }

   for (char c: user_store){
      if (user_store.count(c)) {
         switch (c) {
            case 'q':
               health = hand[0].player_attack(health);
            break;
            case 'w':
               health = hand[1].player_attack(health);
            break;
            case 'e':
               health = hand[2].player_attack(health);
            break;
            case 'r':
               health = hand[3].player_attack(health);
            break;
            case 't':
               health = hand[4].player_attack(health);
            break;
         }
            
      }
   }
   
   return health;
}

int Enemyfight(){
    int rand_options = rand() % (Enemy_list.size());
    cout << "You have encountered " << Enemy_list[rand_options].Name << endl;
    int enemy_health = Enemy_list[rand_options].getHealth();

    while (enemy_health >= 0){
        if (drawpile.size() <5){
            shuffle(drawpile, discard);
        }
        
        if (turn_num % 2 == 0){
            Enemy_list[rand_options].enemy_attack();
            cout << endl << "Your health is... " << player_health << endl;
            draw_function(hand, drawpile);
            this_thread::sleep_for(chrono::milliseconds(700));
            turn_num++;
        }

        else {
            
            display_deck();
            cout << endl;
            cout << "type in letters from q,w,e,r,t \n \n";
            enemy_health = card_selection(enemy_health);
            cout << "enemy health is "<< enemy_health << endl;
            emptycurrenthand(hand, discard);
            this_thread::sleep_for(chrono::milliseconds(700));
            turn_num++;
            
            
        }



        if (enemy_health <= 0){
            return 0;
        }
    }


    turn_num = 0;
    return 0;
}


int main() {
    cout << "Welcome to dungeon fighter" << endl;

    //int total_travel = 1;

    srand(time(NULL));
    

    while (player_health >= 0){
        int input_option;
        choose_option();
        cout <<  "type in enter" << endl;
        cout<< endl;
        Enemyfight();
        cout << endl << "Congratulations you have defeated the enemy!";
        cout << endl;

    }

    if (player_health <= 0){
        cout << "GAME OVER!";
    }


    

}




