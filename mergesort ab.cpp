#include <iostream>
using namespace std;
// Function to merge two subarrays of `a[]`.
// First subarray is `a[l..m]`
// Second subarray is `a[m+1..h]`
void merge(int a[], int l, int m, int h) {
    int i, j, k;
    int n1 = m - l + 1; ///calculating left array size;
    int n2 = h - m;///calculating right array size;

    ///temporary arrays
    int L[n1], R[n2];

    /// Copy data to temp arrays Left[] and Right[]
    for (i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];

    ///Merge the temp arrays back into a[l..h]
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}

// Function to sort the array `a[]` using merge sort
void mergesort(int a[], int l, int h) {
    if (l < h) {
        // Same as (l+h)/2, but avoids overflow for large l and h
        int m = l + (h - l) / 2;

        // Sort first and second halves
        mergesort(a, l, m);
        mergesort(a, m + 1, h);

        merge(a, l, m, h);
    }
}

// Main function
int main() {
    int a[] = {9,3,7,5,6,4,8,2};
    int arraySize = sizeof(a) / sizeof(a[0]);

    cout << "Given array is \n";
    for (int i = 0; i < arraySize; i++)
        cout << a[i] << " ";
    cout << "\n";

    mergesort(a, 0, arraySize - 1);

    cout << "Sorted array is \n";
    for (int i = 0; i < arraySize; i++)
        cout << a[i] << " ";
    cout << "\n";

    return 0;
}
