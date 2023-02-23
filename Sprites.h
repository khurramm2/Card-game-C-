#ifndef Sprites
#define Sprites

#include <iostream>
#include <vector>
#include "cards.h"
#include "enemies.h"
#include "variables.h"



Cards Attack = {"Basic Attack |","this attacks", 5, 0, 1}   ;
Cards Block = {"Basic Block |","this blocks", 5, 0, 1};

Enemy slime = {"Slime", 20, {1,3,3,0,0,0,5}, {0,0,0,3,3,3}};

#endif