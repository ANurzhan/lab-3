#include <iostream>                                                  
#include <cmath>
using namespace std;
int x, y, z;
int main () 
{
   cin >> x >> y >> z;
   if(x >=y && x >= z)
   {
   	cout << x;
   
  }  else if( y >=x && y >=z)
          {
          cout << y; }
          else { cout << z; }
           





return 0;
}