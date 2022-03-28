#include <iostream>
using namespace std;

int ones(string s) {
    if (s == "") return 0;
    if (s[s.length() - 1] == '1') {
        return ones(s.erase(s.length() - 1)) + 1;
    }
    return ones(s.erase(s.length() - 1));
}

int main() {
    string s;
    cin >> s;
    cout << ones(s);
    return 0;
}
