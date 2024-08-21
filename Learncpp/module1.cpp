#include <iostream>
using namespace std;

int main(){
    cout << "hello world my first cpp program";

    //variables initialization
    bool isAlive {false};
    int Health {35};
    float Armor {0.8};
    string Name {"Goblin Warrior"};
        // Health {40}; not allowed as {} only used for initialization use = to update
    //copying variables
    int currentHealth {Health};

    int bigNumber {100'000'000};

    bool testBool { 1 == 2}; // value initialized as false
    

    return 0;

}
