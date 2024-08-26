#include <iostream>
using namespace std;

void Log(int x){
    while(x <= 100){
        if (x % 15 == 0)
        {
            cout << "FizzBuzz \n"; 
        }
       else  if (x % 5 == 0)
        {
            cout << "Buzz \n"; 
        }
        else if (x % 3 == 0)
        {
            cout << "Fizz \n"; 
        } else {
            cout<< x << "\n";
        }
         ++x;
    }
}
int main(){

    Log(1);

    return 0;

}