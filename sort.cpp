#include <bits/stdc++.h>
using namespace std;

bool comp (pair <int,int>p1,pair <int,int>p2){
    if (p1.second == p2.second){
        return (p1.first>p2.first);
    }
    
    
    return (p1.second < p2.second);
}

int main () {
    int n ;
     cin >> n;
     vector <pair<int,int>>v;
     for (int i = 0; i < n; i++)
     {
        int x,y;
        cin >> x>>y;
        v.push_back({x,y});

     }
     sort (v.begin(),v.end() ,comp);

     for (auto x : v)
{
    cout << x.first <<" " <<x.second << "\n";
}     
     return 0;
}