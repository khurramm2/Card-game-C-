#include <iostream>
#include <conio.h>
#include <random>
#include <ctime>
using namespace std;
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

}









