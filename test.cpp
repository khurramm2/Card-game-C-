#include <iostream>
#include <vector>
#include <conio.h>
#include <random>
#include <unordered_set>
#include <set>
#include <map>
#include <chrono>
#include <thread>
#include <ctime>
#include "enemies.h"
#include "variables.h"
#include "cards.h"
#include "Sprites.h"
#include  "drawdeck.h"
#include "map.h"

// vector<Cards> hand = {Attack, Attack, Attack, Block, Block};
// vector<Cards> discard = {};
// vector<Cards> drawpile = {Heavy_Attack, Attack, Dash_Strike, Block, Block};

int main() {
   vector<Cards> hand = {Attack, Attack, Attack, Block, Block};
   vector<Cards> discard = {};
   vector<Cards> drawpile = {Heavy_Attack, Attack, Dash_Strike, Block, Block};
   emptycurrenthand(hand, discard);
   draw_function(hand, drawpile);
   emptycurrenthand(hand, discard);
   shuffle(drawpile,discard);
   //drawpile.push_back(Attack);
   for (Cards i : drawpile){
      cout << i.Card_Name << endl;
   }


}





   // vector<int> ff = {1,2,3};
   // ff.pop_back();

   // for (int nums : ff){
   //    cout << nums;
   // }