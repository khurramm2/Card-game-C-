#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>


//the guess the number
void GuessTheNumber(){
    cout <<"You  have stumbled upon the genie of luck. We shall play a game now. I will think of a number between 1-20. If you guess the right number you will recieve 5 gold."<< endl;
    
    srand(time(0));

   
    int random_number = rand() % 20 + 1;
    int random_check = 5;
    int user_entered;
    cout << "I have chosen my number and now its time to make your choice" << endl;
    cout << "Enter a number between 1 and 20" << endl;
    cin >> user_entered;
    
    if (user_entered==random_check){
        cout << "You have guessed the correct number. You win 5 gold."<< endl;
    }
    else{
        cout << "wrong answer"<< endl;
    }



}

int main(){
    GuessTheNumber();
}

