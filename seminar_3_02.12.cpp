// seminar_3_02.12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

using namespace std;

double f(double n, int x, int fac) {
    return n*(n-1) * (double(pow(x, 2*n))/fac);
}

int main()
{
    int i, n, x;
    double s;
    long long k, fac;
    cin >> n >> x;
    s = 0;
    fac = 1;
    cout << 'n' << '|' << 'f' << '|' << "fac" << endl;
    for (i = 1; i <= n; i++) {
        fac *= 2*i;
        k = f(i, x, fac);
        s += k;
        cout << i << '|' << k << '|' << fac << endl;
    }
    cout << 's' << s;
}

// 1    2    3    for x = 2
// 0    4    12 (7,99999998 + 4)
// 2    8    48  - fac