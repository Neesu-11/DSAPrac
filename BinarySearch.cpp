#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int k = 6;
    int l=0, r=6;
    
    while(l<r){
        
       int mid = l+(r-l)/2;
       
       if(arr[mid] == k){
           cout << "element found at " << arr[mid];
           break;
       }
       else if(arr[mid] < k){
        
         l=mid+1;
       }
       else{
           r=mid-1;
       }
    }
    return 0;
}