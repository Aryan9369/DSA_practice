#include <iostream>
using namespace std;

void merge_arr(int arr1[], int arr2[], int n, int m, int temp[]) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            temp[k] = arr1[i];
            i++;
        } else {
            temp[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of arr1
    while (i < n) {
        temp[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of arr2
    while (j < m) {
        temp[k] = arr2[j];
        j++;
        k++;
    }
}

void display(int temp[], int size) {
    cout << "Merged array: ";
    for (int i = 0; i < size; i++) {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, m;

    cout << "Enter the number of elements in the first array: ";
    cin >> n;
    int arr1[n];
    cout << "Enter elements of the first array (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the number of elements in the second array: ";
    cin >> m;
    int arr2[m];
    cout << "Enter elements of the second array (sorted): ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int temp[n + m]; // temp array declared in main
    merge_arr(arr1, arr2, n, m, temp); // pass temp to merge_arr
    display(temp, n + m);

    return 0;
}
