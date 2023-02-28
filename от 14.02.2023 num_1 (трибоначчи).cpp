// проверка является ли числом трибоначчи

#include <iostream>

using namespace std;

bool trib(int x) {
    if (x == 0 || x == 1 || x == 2) {
        return true;
    }
    int a = 0, b = 1, c = 2, d = a + b + c;
    while (d < x) {
        a = b; 
        b = c;
        c = d;
        d = a + b + c;

    }
    if (d == x) {
        return true;
    }
    return false;
}

int main()
{
    int x;
    x = 5;
    cout << trib(x);
}
