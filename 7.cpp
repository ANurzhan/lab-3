#include <iostream>
#include <cmath>
using namespace std;
int x, y, w, q;  
int main () {

cin >> x >> y; 
q = (x + y) / 2;
w = 2 * x * y;

if(x > y)   {

	x = w;
	y = q;
	cout << x << " " << y;     }



	return 0;
	}