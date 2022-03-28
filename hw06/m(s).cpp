#include <iostream>
#include <algorithm>
using namespace std;

int m(string s) {
    if (s == "") return 9;
    return min(m(s.erase(s.length() - 1)), s[s.length() - 1] - '0');
}

int main() {
    string s;
    cin >> s;
    cout << m(s);
    return 0;
}
