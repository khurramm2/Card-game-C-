#include <iostream>
#include <vector>

using namespace std;

//You find an treasure room full of treasure. Try to get as much gold as you can before the enemy comes back

vector<int> treasure = {20,17,14,18,11,19};

int get_treasure(vector<int> treasure, int monster_time){
    int low = 0, high = 0, chest_number, mtime, money = 0;

    cout << "How many chests do you want to search?: ";
    cin >> chest_number; 
    cout << "How long do you want to search each chest for?: ";
    cin >> mtime;

    for (int i = 0; i < treasure.size();i++){
        high = max(high, treasure[i]);
    }

    

    while (low <= high){
        int mid = low + (high - low) / 2;
    }

    return 0;
}

int main(){
    get_treasure(treasure, 8);
}