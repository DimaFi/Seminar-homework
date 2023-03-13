//я не понял, что нужно было сделать

#include <iostream>

using namespace std;

template <typename X> void arrayx(X* a,int n) {
	int i;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
}


int main()
{
	int i, j, n;

	cin >> n;

	int* a = new int[n];

	arrayx(a, n);
	
}
