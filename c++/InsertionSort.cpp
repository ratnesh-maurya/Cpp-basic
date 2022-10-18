#include <bits/stdc++.h>
using namespace std;
  
// Function to sort an array using insertion sort
void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = arr[i]; 
        j = i - 1; 
  
        // Moving elements of arr[0..i-1] that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 
  
void printArray(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl;
} 
  
int main() 
{ 
    int arr[] = { 3,5,23,54,86,24,21,46,6,2 }; 
    int N = sizeof(arr) / sizeof(arr[0]); 
  
    insertionSort(arr, N); 
    printArray(arr, N); 
  
    return 0; 
} 