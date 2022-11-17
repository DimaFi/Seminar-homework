#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

double aa(double &a, double &b) {
	return (a + b);
}

int main() {
	double a, b;
	cin >> a >> b;

	cout << aa(a, b);
  	return 0;
}
