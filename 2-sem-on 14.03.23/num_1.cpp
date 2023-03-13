#include <iostream>

using namespace std;


int main()
{
	int i, j, n, maxn = 0, minn, mn;

	cin >> n;

	int* a = new int[n];
	int* b = new int[n];

	for (i = 0; i < n; i++) {
		cin >> a[i];
		if (maxn < a[i]) {
			maxn = a[i];
		}
	}

	for (i = 0; i < n; i++) {
		minn = 1e10;
		for (j = 0; j < n; j++) {
			if (a[j] < minn) {
				minn = a[j];
				mn = j;
			}
		}
		a[mn] = maxn;
		b[i] = minn;
	}
	for (int i = 0; i < n; i++) {
		cout << b[i] << '\n';
	}
}
