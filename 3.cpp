#include <iostream>
#include <cmath>
using namespace std;
int x, y, z;
int main () 
{
cin >> x >> y >> z;
  if ( x >= y && y >= z ) 
  {
     cout << 2*x  << 2*y << 2*z;  }
     else { 
     cout << abs(x) << abs(y) << abs(z) ;
     }



return 0;
}