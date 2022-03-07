#include <iostream>
using namespace std;

// binary insertion sort
int binarySearch(int a[], int key, int l, int r) {
    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (key == a[mid]) return mid + 1;
        else if (key > a[mid]) l = mid + 1;
        else r = mid - 1;
    }
    return l;
}

void binaryInsertionSort(int a[], int n) {
    int i, j, loc, element;
    for (i = 1; i < n; i++) {
        j = i - 1;
        element = a[i];

        loc = binarySearch(a, element, 0, j);

        while (j >= loc) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = element;
    }
}

int main() {
    int a[] = {3,2,4,5,1,6};

    binaryInsertionSort(a, 6);
    for (int i : a) {
        cout << i << " ";
    }
    return 0;
}
