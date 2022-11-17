#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <vector>
#include <cmath>
#include <windows.h>
#include <iomanip>
#include <set>

using namespace std;
const long double g = 6.67430 * 1e-11;
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
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	double a;
	cin >> a;

	cout << aa(a);
  	return 0;
}
