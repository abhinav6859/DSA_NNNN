// C++ program for implementation of
// insertion sort
#include <bits/stdc++.h>
using namespace std;

// Function for insertion sort
void insertionSort(int arr[], int n)
{
    int i,j;
    for(i=1;i<n;i++){
  int temp=arr[i];

        for(j=i-1;j>=0;j--){
            if (arr[j]>temp){
          arr[j+1]=arr[j];
          arr[j]=temp;
            }
        }
    }
    
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        cout << endl;
    }
}

// Driver program
int main()
{
    int arr[] = { 64, 25, 65,2,12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    insertionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}