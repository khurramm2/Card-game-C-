#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

int main()
{
    // variables
    string shopName = "shop";
    string currency = "gold";
    vector<string> potions = {"potion1", "potion2", "card1", "card2"};

    // welcoming message
    cout << "Welcome to " << shopName << "! Here, you can buy items " << currency << "." << endl;

    while (true)
    {
        // main menu
        int option;
        cout << "Select an option from the main menu:" << endl;
        cout << "1. Buy an item" << endl;
        cout << "2. Exit" << endl;
        cin >> option;

        if (option == 1)
        {
            // pick an item
            int index;
            cout << "Which item would you like to purchase?" << endl;
            for (int i = 0; i < items.size(); i++)
            {
                cout << (i + 1) << ". " << items[i] << endl;
            }
            cin >> index;
            string item = items[index - 1];

          
            // exit
            cout << "Thank you for visiting " << shopName << "!" << endl;
            break;
        }
        else
        {
            // erorr
            cout << "Invalid option. Please try again." << endl;
        }
    }

    return 0;
}