#include <bits/stdc++.h>
using namespace std;
int towerofhanoi(int n,char start , char middle , char end){
    if (n==0)
    return 0;

    int x = towerofhanoi(n-1,start,end,middle);
    cout <<n<<" "<<start<<" "<<end<<"\n";
    int y = towerofhanoi(n-1,middle,start,end);
    return x+y+1;
}

int main () {
    int n ; 
    cin >> n;
    char start = 'A';
    char middle = 'B';
    char end = 'C';
    cout << towerofhanoi(n,start,middle,end)<<"\n";
    
     return 0;
}