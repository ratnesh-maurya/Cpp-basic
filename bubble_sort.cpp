// Bubble sort algorithm in c++ 

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void bubble_Sort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

void printArr(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int ln;
    cout<<"Enter the length of the array : ";
    cin>>ln;
	int arr[ln]; 

    cout<<"Enter the array elements - "<<endl;
    for(int i=0 ; i<ln ; i++){
        cin>>arr[i];
    } 

    cout<<"The elements of array are - "<<endl;
    for(int i=0 ; i<ln ; i++){
        cout<<arr[i]<<" ";
    }

	bubble_Sort(arr, ln);
	cout << "Sorted array: \n";
	printArr(arr, ln);
	return 0;
}

// This code is contributed by - Swapnil0803
