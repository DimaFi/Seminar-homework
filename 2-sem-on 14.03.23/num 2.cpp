#include <iostream>

using namespace std;


int main()
{
	int i, j, n, maxn = -1e10, minn = 1e10, mn;

	cin >> n;

	int* a = new int[n];
	int* b = new int[n];

	for (i = 0; i < n; i++) {
		cin >> a[i];
		if (minn > a[i]) {
			minn = a[i];
		}
	}

	for (i = 0; i < n; i++) {
		maxn = -1e10;
		for (j = 0; j < n; j++) {
			if (a[j] > maxn) {
				maxn = a[j];
				mn = j;
			}
		}
		a[mn] = minn;
		b[i] = maxn;
	}
	for (int i = 0; i < n; i++) {
		cout << b[i] << '\n';
	}
}
