#include <iostream>
#include <vector>
#include <unordered_map>
#include<unordered_set>
#include <conio.h>
using namespace std;


class Cards{
public:
    string Card_Name, Card_Summary;
    int Damage;
    int Block;
    int Cost;


    void display_attack(){
        cout << Card_Name << "  Damage: "<< Damage;
    }
    void display_defend(){
        cout << Card_Name <<"  Block  " << Block;
    }


    Cards(string card_name,string card_summary, int damage, int block, int cost){
        Card_Name = card_name;
        Card_Summary = card_summary;
        Damage = damage;
        Block = block;
        Cost = cost;
    }

};


int main(){
    Cards card = {"Basic Attack |","this attacks", 10, 0, 4};
    card.display_attack();
}