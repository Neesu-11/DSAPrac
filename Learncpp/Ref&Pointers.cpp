#include <iostream>
using namespace std;


int main() {
  
int x = 12;

int& y{x};  // this is creating a reference variable storing address of x
int* z {&y}; //this is creating pointer variable 

cout << &y << endl;
cout<< &x << endl;
cout << z;
    return 0;
}