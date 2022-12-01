// семинар_1_02.12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

using namespace std;

double f(double n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    return double(f(n - 1)) / f(n - 2) + 1;
}

int main()
{
    int i, n;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cout << i << ' ' << f(i) << endl;
    }
}

