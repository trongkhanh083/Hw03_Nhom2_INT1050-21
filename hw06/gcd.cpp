#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a > b)
        return gcd(b, a);
    if (a == 0)
        return b;
    if (a % 2 == 0 && b % 2 == 0)
        return 2 * gcd(a / 2, b / 2);
    if (a % 2 == 0 && b % 2 != 0)
        return gcd(a / 2, b);
    return gcd(a, b - a);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}
