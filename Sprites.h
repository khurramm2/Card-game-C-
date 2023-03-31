#ifndef Sprites
#define Sprites
#include <iostream>
#include <vector>
#include "cards.h"
#include "enemies.h"
//#include "variables.h"
using namespace std;

//Basic cards

Cards Attack = {"Basic Attack ","this attacks", 5, 0, 1};
Cards Block = {"Basic Block ","this blocks", 0, 5, 1};
Cards Heavy_Attack = {"Heavy Attack", "Does higher damage than a regular attack", 10, 0, 2};
Cards Dash_Strike = {"Dash Strike", "Both attacks and defends", 10, 10, 2};
Cards Heavy_Block = {"Heavy Block", "Gain more block than normal", 0, 12, 2};;

//Special cards: string card_name,string card_summary, int damage, int block, int cost, int poison, int metallic

Cards_Special Poison_Attack = {"Poison Attack", "Basic attack with poison damage", 5, 0, 1, 3, 0};

//Basic enemies

Enemy Slime = {"Slime", 20, {1,3,3,0,0,0,5}, {0,0,0,3,3,3}};
Enemy Wolf = {"Wolf", 25, {3,3,4,7,0,0,4},{0,0,5,6}};

vector<Enemy> Enemy_list = {Slime, Wolf};

vector<Cards> hand = {Attack, Poison_Attack, Poison_Attack, Block, Block};
vector<Cards> discard = {};
vector<Cards> drawpile = {Heavy_Attack, Attack, Dash_Strike, Block, Block};

#endif