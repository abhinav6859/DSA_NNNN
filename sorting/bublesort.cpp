// C++ program for implementation of
// buble sort
#include <bits/stdc++.h>
using namespace std;

// Function for buble sort
void bubleSort(int arr[], int n)
{
   int i,j;
   for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
   if(arr[j]>arr[j+1]){
swap(arr[j],arr[j+1]);
   }
   }
}}

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
    int arr[] = { 64, 25, 12, 22,0,74, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    bubleSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
