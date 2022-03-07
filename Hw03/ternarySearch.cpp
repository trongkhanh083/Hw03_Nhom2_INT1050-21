#include <iostream>
using namespace std;

// ternary search
int ternarySearch(int a[], int l, int r, int key) {
    while (l <= r) {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        if (key == a[mid1]) return mid1;
        if (key == a[mid2]) return mid2;

        if (key < a[mid1]) r = mid1 - 1;
        else if (key > a[mid2]) l = mid2 + 1;
        else {
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }
    return -1; // khong tim thay key
}

int main() {
    int a[] = {1, 2, 3, 5, 6, 7, 8, 10,
               12,13,15,16,18,19,20,22};

    // x = 19 => k = 13
    int k = ternarySearch(a, 0, 15, 19);
    cout << k;
    return 0;
}
