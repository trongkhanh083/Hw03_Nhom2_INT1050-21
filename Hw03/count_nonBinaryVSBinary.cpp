#include <iostream>
using namespace std;

int count_nonbinary = 0;
int count_binary = 0;

// insertion sort
void insertionSort(int a[], int n) {
    int i, j, element;
    for (i = 1; i < n; i++) {
        j = i - 1;
        element = a[i];

        while (j >= 0 && a[j] > element) {
            a[j + 1] = a[j];
            j--;
            count_nonbinary++;
        }
        a[j + 1] = element;
        count_nonbinary++;
    }
}

// binary insertion sort
int binarySearch(int a[], int key, int l, int r) {
    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (key == a[mid]) {
            count_binary++;
            return mid + 1;
        }
        else if (key > a[mid]) {
            count_binary++;
            l = mid + 1;
        }
        else {
            count_binary++;
            r = mid - 1;
        }
        count_binary++;
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
            count_binary++;
        }
        a[j + 1] = element;
        count_binary++;
    }
}

int main() {
    int a[] = {7,4,3,8,1,5,4,2};
    int b[] = {7,4,3,8,1,5,4,2};

    insertionSort(a, 8);
    binaryInsertionSort(b, 8);

    for (int i : a) {
        cout << i << " ";
    }
    cout << endl << count_nonbinary << endl;

    for (int i : b) {
        cout << i << " ";
    }
    cout << endl << count_binary;
    return 0;
}
