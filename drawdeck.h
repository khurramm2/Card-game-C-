#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <conio.h>
#include "variables.h"
#include "Sprites.h"
#include "cards.h"
#ifndef DRAWDECK
#define DRAWDECK


using namespace std;
//vector<int> currenthand = {1,2,3,4,5,6,7,8,9,10};
//vector <string> drawpile = {Attack.Card_Name,Attack.Card_Name,Attack.Card_Name,Attack.Card_Name,Attack.Card_Name,Block.Card_Name,Block.Card_Name,Block.Card_Name,Block.Card_Name,Block.Card_Name};



void shuffle(vector<Cards> drawpile, vector<Cards> discard){
  int i = 0, j=drawpile.size()-1;

  while(i<j){
    drawpile.push_back(discard[i]);
    drawpile.push_back(discard[j]);
    i++;
    j--;
    
  }
}

void draw_function(vector<Cards> currenthand, vector<Cards> drawpile){
  for (int i = 0; i < 5; i++){
    currenthand.push_back(drawpile[i]);
    drawpile.pop_back();
  }

}

void emptycurrenthand(vector<Cards> currenthand, vector<Cards> discard){
  while (!currenthand.empty()) {
    for (int i = 0; i < 5;i++){
      discard.push_back(currenthand[i]);
      currenthand.erase(currenthand.begin());
    }
  }
}






// vector<string> shuffle_original(){
//   int i = 0, j=drawpile.size()-1;

//   while(i<j){
//     drawpile.push_back(discard[i]);
//     drawpile.push_back(discard[j]);
//     i++;
//     j--;
    
//   }


//   // for(int h;h<drawpile.size();h++){
//   //   cout <<drawpile[h] << " ";
    
//   // }
//   return drawpile;


// }

// void emptycurrenthand_original(){
//   while (currenthand != 0) {
//     for (int i = 0; i < 5;i++){
//       discard.push_back(currenthand[0]);
//       currenthand.pop_back();
//     }

// }
// }


// vector<string> draw1(vector<string> drawpile){
//   vector<string> currenthand;
  
//   for (int i = 0; i < 5; i++) {
//       string card = drawpile.back();
//       drawpile.pop_back();
//       currenthand.insert(currenthand.begin(), card);
//   }
  
//   for (int i = 0; i < currenthand.size();i++) {
//     discard.push_back(drawpile[i]);
    
//   }

//   cout << "Drawpile: ";
//   for (string card : drawpile) {
//       cout << card << " ";
//   }
//   cout << endl;
  
//   cout << "Current Hand: ";
//   for (string card : currenthand) {
//       cout << card << " ";
//   }
//   cout << endl;

//     cout << "discard pile: ";
//   for (string card : discard) {
//       cout << card << " ";
//   }
//   cout << endl;
  
//   return drawpile;
// }


#endif

