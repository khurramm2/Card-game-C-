#include<iostream>
#include <vector>
class HealthPotion {
private:
    vector < int > randHealth = {5, 10, 15, 20};

public:
    HealthPotion(){
        for (int i = 0; i < 10; i++) {
            int healthBoost = (rand() % 20) + 1;
            
        }
    }

    int getHealthBoost() {
        int randomNum = (rand() % randHealth.size());
        return randHealth[randomNum];
    }
};
