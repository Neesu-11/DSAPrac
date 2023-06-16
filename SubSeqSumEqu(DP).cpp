#include <bits/stdc++.h>
using namespace std;

int solve(int  i, int n , int x , int cur , int a[]){
    if(i==n)
    return (x ==cur);

    return (solve(i+1,n,x,cur+a[i],a)|solve(i+1,n,x,cur,a));

}

int main () {
    
    int n ;
     cin >> n;
     int a[n];
     for (int i = 0; i < n; i++)
     {
        cin>> a[i];
     }
     
      int x ; 
       cin >> x;
      if  (solve(0,n,x,0,a)){
        cout<< "Subsequence Present";
      } else {
        cout<<"Subsequence Absent";
      }
     return 0;
}