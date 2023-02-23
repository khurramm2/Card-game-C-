#include <iostream>
#include <curses.h>
using namespace std;

int gold = 94;

class Shop{ 
public:

    int shop(){
        string inventory[2] = {"potions", "cards"}; //add relics to shop

        int prices[2] = {10, 5}; 
        

        cout << "Welcome to the shop! Here you can buy potions and cards." << endl; 

        cout << "Which item would you like to buy? (1 for potions, 2 for cards)" << endl; 
        int item;
        cin >> item; 

        if (item == 1 || item == 2) { 

            int cost = prices[item - 1]; 
            cout << "The cost is " << cost << " coins. Would you like to proceed? (y/n)" << endl;
            char proceed;
            cin >> proceed; 

            if (proceed == 'y') {
                gold -= cost; //check if player has enough money 
                cout << "The item has been purchased. Your remaining balance is " << gold << " coins." << endl;
            }
        } else {
            cout << "Sorry, this item is not available in the shop." << endl;
        }

        return 0;
    }
};

int main(){
    Shop s1;
    s1.shop();

}
