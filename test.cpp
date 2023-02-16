#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <conio.h>
#include <unordered_map>
#include<map>
using namespace std;

int main(){
    map<int, int> map1;
    vector<int> test = {1,2,3,4,5,5};

    for (int i = 0; i < test.size();i++){
        map1[test[i]]++;
        //map1[test[i]] = 1;
        //map1.insert({test[i],i});
    }


    for (const auto& [key, value] : map1){
        cout << key << " " << value << endl;
    }
}