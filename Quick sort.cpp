#include <iostream>
using namespace std;

// Partition function to rearrange elements and find the pivot index
int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= j && arr[i] <= pivot) {
            i++;
        }
        while (i <= j && arr[j] > pivot) {
            j--;
        }
        if (i < j) { ///swap(arr[i], arr[j]);
            // Manually swap elements at indices i and j
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Move pivot to its correct position
    ///swap(arr[low], arr[j]); return j;
    int pivotIndex = j;
    arr[low] = arr[pivotIndex];
    arr[pivotIndex] = pivot;
    return pivotIndex;
}

// Recursive QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1); // Sort left subarray
        quickSort(arr, pivotIndex + 1, high); // Sort right subarray
    }
}

int main() {
    int n,i;//sizeof(arr) / sizeof(arr[0]);
    cout<<"Enter N:";
    cin>>n;
    int arr[n];
    cout<<"\nEnter array elements:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
