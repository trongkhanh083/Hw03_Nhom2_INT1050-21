#include <iostream>
#include <vector>
using namespace std;

void findBracket(int n, int bac,  vector<string>& bList) {
    if (n == 0) return;
    vector<string> temp;

    for (int i = 0; i < bList.size(); i++) {
        if (bList.at(i).length() == bac * 2) {
            temp.push_back(bList.at(i));
        }
    }

    for (int i = 0; i < temp.size(); i++) {
        string model1 = '('+ temp.at(i) + ')';
        string model2 = temp.at(i)+ "()";
        string model3 = "()" + temp.at(i);

        bList.push_back(model1);
        if (model1 != model2 && model2 != model3) {
            bList.push_back(model2);
        }
        if (model3 != model1 && model2 != model3) {
            bList.push_back(model3);
        }
        if (model2 == model3 && model1 != model2) {
            bList.push_back(model2);
        }
    }
    findBracket(n - 1,bac + 1, bList);
}

int main() {
    vector<string> bList;
    bList.emplace_back("");
    int n;
    cin >> n;
    findBracket(n/2,0,bList);
    for (int i = 1;i < bList.size(); i++) {
        cout << bList.at(i) << endl;
    }
    return 0;
}
