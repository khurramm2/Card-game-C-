#ifndef Sprites
#define Sprites

#include <iostream>
#include <vector>
#include "cards.h"
#include "enemies.h"
//#include "variables.h"
using namespace std;


Cards Attack = {"Basic Attack ","this attacks", 5, 0, 1};
Cards Block = {"Basic Block ","this blocks", 0, 5, 1};
Cards Heavy_Attack = {"Heavy Attack", "Does higher damage than a regular attack", 10, 0, 2};
Cards Dash_Strike = {"Dash Strike", "Both attacks and defends", 10, 10, 2};
Cards Heavy_Block = {"Heavy Block", "Gain more block than normal", 0, 12, 2};;

Enemy Slime = {"Slime", 20, {1,3,3,0,0,0,5}, {0,0,0,3,3,3}};
Enemy Wolf = {"Wolf", 25, {3,3,4,7,0,0,4},{0,0,5,6}};

std::vector<Enemy> Enemy_list = {Slime, Wolf};

#endif