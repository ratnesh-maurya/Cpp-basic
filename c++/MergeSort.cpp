#include <iostream>
using namespace std;

void merge(int input[], int s, int mid, int e){
    int a1[1000], a2[1000];
    int n1 = mid-s+1;
    int n2 = e-mid;
    for(int i = 0; i < n1; i++){
        a1[i] = input[i+s]; 
    }
    for(int i = 0; i < n2; i++){
        a2[i] = input[i+s+n1];
    }
    int k = s;
    int i=0, j=0;
    while(i<n1 && j<n2){
        if(a1[i] < a2[j]){
            input[k] = a1[i];
            i++;
            k++;
        }else{
            input[k] = a2[j];
            j++;
            k++;
        }
    }
    while(i < n1){
        input[k] = a1[i];
        i++;
        k++;
    }
    while(j < n2){
        input[k] = a2[j];
        j++;
        k++;
    }
}

void merge_sort(int input[], int s, int e){
    if(s >= e){
        return;
    }
    int mid = (s+e)/2;
    merge_sort(input, s, mid);
    merge_sort(input, mid+1, e);
    merge(input, s, mid, e);
}

void mergeSort(int input[], int size){
    merge_sort(input, 0, size-1);
        
}

int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}
