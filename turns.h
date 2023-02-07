#include <iostream>
#include <algorithm>
#include <conio.h>
using namespace std;

//enter = 13

int turn_num;

int game_turn(){
    std::cout << "it is your turn\n";
    switch (getch()){
        case 13:
        //when enter is pressed the turn ends;
        turn_num++;
        //cout << turn_num;
    }
    
    return 0;
}



