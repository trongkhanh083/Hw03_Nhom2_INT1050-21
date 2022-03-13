#include <bits/stdc++.h>
using namespace std;

bool primeNumber(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int count1 = 0, count2 = 0;
    // phuong phap 2
    for (int x = 2; x < n; x++) {
        if (primeNumber(x)) {
            count1++;
        }
    }
    // phuong phap 3
    for (int x = 2; x <= sqrt(n); x++) {
        if (primeNumber(x)) {
            count2++;
        }
    }
    cout << count1 << endl << count2;
    return 0;
}
