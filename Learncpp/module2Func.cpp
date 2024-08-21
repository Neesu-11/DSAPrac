#include <iostream>
using namespace std;
// code to understand basic cpp function
/*I can nest ternary operations*/

int Health {100};



void TakeDmg(){
    Health -= 20;
    cout << "taking dmg \n";
     bool isDead { Health <= 0 } ;

    if(isDead == true){cout << "you are dead";}
}
int main() {
    TakeDmg();
    TakeDmg();
    TakeDmg();
    TakeDmg();
    TakeDmg();
  cout<< "\n" << Health;  // global variable value will change everywhere

    /*Switch Statements*/

    

    return 0;
}