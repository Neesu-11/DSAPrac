#include <iostream>
using namespace std;

struct Vector3{
    int x;
    int y;
    int z;

   Vector3 operator+ (Vector3 Other){
    return Vector3 {x += Other.x,
    y += Other.y,
    z += Other.z};
   }
 /* Vector3 operator= (Vector3 Other){
   return Vector3{ x = Other.x,
    y = Other.y,
    z = Other.z};
   } */
};

int main(){

 Vector3 vec1 {1,2,3};
 Vector3 vec2 {10,20,30};

 Vector3 res = vec1 + vec2;

 cout << res.x << res.y << res.z;


    return 0;
}