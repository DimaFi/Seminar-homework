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

double aa(double &a, double &b) {
	return (a + b);
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	double a, b;
	cin >> a >> b;

	cout << aa(a, b);
  	return 0;
}
