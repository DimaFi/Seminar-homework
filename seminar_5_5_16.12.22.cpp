#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <vector>
#include <cctype>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	int n, m;
	cin >> n;
	int** a = new int* [n];
	int counter = 0;
	for (int i = 0; i < n; i++) {
		a[i] = new int[n];
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		if (i != n - i - 1) {
			a[i][i] = -a[i][n - i - 1] - a[i][i];
			a[i][n - i - 1] = -a[i][n - i - 1] - a[i][i];
			a[i][i] = -a[i][n - i - 1] - a[i][i];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}
