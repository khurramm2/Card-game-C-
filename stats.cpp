#include <iostream>
#include <string>
using namespace std;
int health(){
  int health = 0;
  health =100;
  std:: string healthbar;

  return health;
}

void HUD(){
  string name, healthbar = "|--------------|";
  cout <<"Enter your characters name:" ;
  cin >> name; 
  cout << "Name: " << name << std::endl << "Health: " << health() << std::endl;
}

int main(){
  
  health();
  HUD();
  return 0;
}