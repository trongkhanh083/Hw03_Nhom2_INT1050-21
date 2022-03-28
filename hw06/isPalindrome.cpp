#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    if (s == "") return true;
    if (s[0] != s[s.length() - 1]) {
        return false;
    }
    string s1 = s.erase(s.length() - 1);
    string s2 = s1.erase(0);
    return isPalindrome(s2);
}

int main() {
    string s;
    cin >> s;
    if (isPalindrome(s)) cout << "yes";
    else cout << "no";
    return 0;
}
