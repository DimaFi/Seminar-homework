#include <iostream>

using namespace std;

int evkl(int a, int b) {
    if (a % b == 0) {
        return b;
    }
    if (b % a == 0) {
        return a;
    }
    if (a > b) {
        return evkl(a % b, b);
    }
    return evkl(b % a, a);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << evkl(a, b);
}
