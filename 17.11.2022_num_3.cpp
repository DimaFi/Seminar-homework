#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;
bool aa(double &a) {
  if (a==0) {
    	a = 0;
  	} 
  	else {
	a *= -1;
  	}
	return (a == 0) ? false:true;
}

int main() {
	double a;
	cin >> a;

	cout << aa(a);
  	return 0;
}
