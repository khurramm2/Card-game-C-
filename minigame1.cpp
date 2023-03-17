#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include  "shop.h"

int again;
int Wins=0;
int Loses=0;
int consecutiveWin=0;
int random_number = rand() % 20 + 1;

//the guess the number
void play_again();

void clue(int consecutiveWin) {
    if (consecutiveWin >= 2) {
        
        if (random_number < 10) {
            cout << "You have won a hint.The number has one digit." << endl;
        }
        else {
            cout << "You have won a hint.The number has two digits." << endl;
        }
    }
    else {
        cout << "You need at least 2 wins in a row to get a clue." << endl;
    }
}

void GuessTheNumber(){
    cout <<"You  have summoned genie of luck. We shall play a game now. I will think of a number between 1-20. If you guess the right number you will recieve 5 gold.If you can guess the right number twice in a row you will also recieve a hint."<< endl;
    
    srand(time(0));

   
    
    int random_check = 5;
    int user_entered;

    clue(consecutiveWin);
    cout << "I have chosen my number and now its time to make your choice" << endl;
    cout << "Enter a number between 1 and 20" << endl;
    cin >> user_entered;
    
    if (user_entered==random_check){
        cout << "You have guessed the correct number. You win 5 gold."<< endl;
        consecutiveWin = consecutiveWin + 1;
        cout << "Consecutive wins " << consecutiveWin << endl;
        gold = gold + 5;
        Wins = Wins +1;
        
        play_again();
    }
    else{
        cout << "wrong answer"<< endl;
        consecutiveWin = 0;
        cout << "Consecutive wins " << consecutiveWin << endl;
        Loses = Loses + 1;
        
        play_again();
    }

}
void play_again(){
    
    cout << "Would you like test your luck? Enter 1 for yes and 2 for no " << endl;
    cin >> again;
    if (again==1){
        cout << "ok" << endl;
        GuessTheNumber();
    }
    else if (again==2){
        cout << "Ok" << endl;
        cout << "You leave the game with " << gold << " gold" << " and you have won the game "<< Wins <<" times and have lost "<< Loses<<" times" <<endl;
    }
    else{
        cout << "You must enter 1 or 2."<< endl;
        play_again();
    }
}




int main(){
    //GuessTheNumber();
    play_again();
}

