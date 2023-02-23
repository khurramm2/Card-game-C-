#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <conio.h>
#ifndef DRAWDECK
#define DRAWDECK


using namespace std;
//vector<int> currenthand = {1,2,3,4,5,6,7,8,9,10};


vector<int> deck(vector<int> drawpile){

  vector < int > dp={};

  int i = 0, j=drawpile.size()-1;

  while(i<j){
    dp.push_back(drawpile[i]);
    dp.push_back(drawpile[j]);
    i++;
    j--;
    
  }
  

  for(int h;h<dp.size();h++){
    cout <<dp[h] << " ";
   
  }
  return dp;


}

vector<int> displayCards(){

  vector<int>currenthand;
  for(int a;a<current.size();a++){
    cout <<currenthand[a] << " ";
}
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

