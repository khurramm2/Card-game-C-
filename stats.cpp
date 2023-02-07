#include <iostream>
#include <string>

int health(){
  int health = 0;
  health =100;
  std:: string healthbar;

  return health;
}

void HUD(){
  std::string name, healthbar = "|--------------|";
  std:: cout <<"Enter your characters name:" ;
  std:: cin >> name; 
  std:: cout << "Name: " << name << std::endl << "Health: " << health() << std::endl;
}

int main(){
  
  health();
  HUD();
  return 0;
}