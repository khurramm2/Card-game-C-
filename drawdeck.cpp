#include <random>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

void deck(){

  vector < int > drawpile={1,2,3,4,5,6,7,8,9,10};
  vector < int > drawpile2={};
  // vector < int > pulledvector={};
  // vector <int> usedpile={};
  //cout << "drawvector size: " << drawvector.size() << '\n';
  int i = 0, j=drawpile.size()-1;
  while(i<j){
    drawpile2 .push_back(drawpile[i]);
    drawpile2.push_back(drawpile[j]);
    i++;
    j--;

  }

  for(int h;h<drawpile2.size();h++){
    cout <<drawpile2[h] << " ";

  }

}

int main(){
  deck();
}