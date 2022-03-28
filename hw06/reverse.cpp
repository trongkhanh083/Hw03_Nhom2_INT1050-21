#include <iostream>
using namespace std;

string reverse(string s) {
    if (s == "") return "";
    return s[s.length() - 1] + reverse(s.erase(s.length() - 1));
}

int main() {
    string s;
    cin >> s;
    cout << s[s.length() - 1] + reverse(s);
    return 0;
}
