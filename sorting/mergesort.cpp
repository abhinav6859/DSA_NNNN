
// merge sort
#include <bits/stdc++.h>
using namespace std;

// Function for merge sort
void mergeSort(int arr[], int n)
{
 
}

// Function to print an array
void printArray(int arr[], int size)
{`
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        cout << endl;
    }
}

// Driver program
int main()
{
    int arr[] = { 64, 25, 12, 22,0,74, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    mergeSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
