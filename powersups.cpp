#include <iostream>
#include <string>
#include <ctime>
#include <random>
#include <vector>
using namespace std;

class relics{
public:
  vector< int > Block = {0,1,2,3,4,5};
  vector < char > Relic = {};

  //relic1--this will increase block by +6. Add relics to a vector when bought from shop and then use a seatrching algotrithm to search for the relics in the vector when they r to be used .
  
  int character_block(){
    //use this when it's the players turn
    srand(time(0));
    int current_block = Block[rand() % Block.size()]; 
    current_block = current_block + 6
    return current_block;
  }
  


};

int main(){
  relics r1;
  r1.character_block();
  
}