// seminar_2_02.12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

using namespace std;

double f(double n, int x, int fac) {
    return fac * pow(x, 2 * n + 1);
}

int main()
{
    int i, n, x, fac;
    double s;
    cin >> n >> x;
    s = 0; 
    fac = 1;
    for (i = 1; i <= n; i++) {
        fac *= i;
        s += f(i, x, fac);
    }
    cout << s;
}

// 1    2    3  for x = 2
// 8 + 64 + 768