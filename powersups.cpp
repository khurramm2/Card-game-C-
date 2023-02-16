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
    if (turnum % 2 == 0){
      block = block+6;
      return block;
    }
//current_block = current_block + 6
//return current_block;
  }
//this is relic 2(strawberry) it increases health by 7 at the start of everyturn.
  int increase_health(){
    if (turnum % 2 == 0){ // check for if player has the relic before it gets used 
      player_health=player_health + 7;
      return player_health;
    }
  }

};


int main(){
  relics r1;
  r1.character_block();
  
}