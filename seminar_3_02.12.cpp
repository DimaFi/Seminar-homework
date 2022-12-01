#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double n, int x, double fac) {
    return n*(n-1) * (double(pow(x, 2*n))/fac);
}

int main()
{
    int i, n, x;
    double s;
    double k, fac;
    cin >> n >> x;
    s = 0;
    fac = 1;
    // cout << 'n' << '|' << 'f' << '|' << "fac" << '|' << 's' << endl; // - если надо все
    for (i = 1; i <= n; i++) {
        fac *= (2*i-1)*(2*i);
        k = f(i, x, fac);
        s += k;

        // cout << fixed << setprecision(15) << i << '|' << k << '|' << fac << '|' << s << endl;  // - если надо все

        cout << i << ' ' << fixed << setprecision(15) << s << endl;
    }
}
