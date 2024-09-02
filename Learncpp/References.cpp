#include <iostream>
using namespace std;

void func1 (int* arg){
    ++(*arg);
    ++(*arg);
    ++(*arg);
}

int main() {
  
int x = 12;

int& y{x};  // this is creating a reference variable storing address of x
int* z {&y}; //this is creating pointer variable 

cout << &y << endl; // we can print address like this
cout << y << endl; // we can print value of reference like this
cout<< &x << endl; 
cout << z << endl; // we can print address of pointer like this

func1(&y);
cout << y << endl;

    return 0;
}