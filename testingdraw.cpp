#include <iostream>
#include <conio.h>
#include <random>
using namespace std;
void drawtest(){
    // Assume drawpile and currenthand are arrays of integers
    vector <int> drawpile = {1, 2, 3, 4, 5};
    vector<int> currenthand;

    // Remove an element from the back of the drawpile array
    int removedElement = drawpile[sizeof(drawpile)/sizeof(drawpile[0]) - 1];
    drawpile[sizeof(drawpile)/sizeof(drawpile[0]) - 1] = 0; // Optional, set the value to 0 to clear the memory

    // Insert the removed element into the currenthand array
    int index = sizeof(currenthand)/sizeof(currenthand[0]) - 1;
    currenthand[index] = removedElement;
    cout <<removedElement; 
    
}

int main(){
    drawtest();

}