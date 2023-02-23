#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <conio.h>
#include "variables.h"
#include "Sprites.h"
#ifndef DRAWDECK
#define DRAWDECK


using namespace std;
//vector<int> currenthand = {1,2,3,4,5,6,7,8,9,10};
drawpile = {Attack.Card_Name,Attack.Card_Name,Attack.Card_Name,Attack.Card_Name,Attack.Card_Name,Block.Card_Name,Block.Card_Name,Block.Card_Name,Block.Card_Name,Block.Card_Name}

vector<int> deck(vector<int> discard){

  vector < int > drawpile={};

  int i = 0, j=drawpile.size()-1;



  while(i<j){
    drawpile.push_back(discard[i]);
    drawpile.push_back(discard[j]);
    i++;
    j--;
    
  }
  

  for(int h;h<dp.size();h++){
    cout <<dp[h] << " ";
   
  }
  return dp;


}

// vector<int> displayCards(){

//   vector<int>currenthand;
//   for(int a;a<current.size();a++){
//     cout <<currenthand[a] << " ";
// }
// }

void drawhand(){
  
}

//int turn_num=1;

// int turns(){
//     cout << "type something in ";
//     if (getch() == 13) {
//         turn_num++;
//         cout << turn_num << endl;
//         return turn_num;
    
//     }
//     else if(getch()==99){
//         displayCards();
//     }
//     else{
//         cout << "Please type enter to end your turn";
//     }
//     return turn_num;
// }

// int main(){
//   while (true){
//     turns();
//   }
// }
#endif

