#include<iostream>
#include<vector>
using namespace std;
void mergearray(int arr1[],int a,int arr2[],int b,int arr3[],int c){
    int i=0;
    int j=0;
    int count=0;
    while(i<a && j<b){
        if(arr1[i]<arr2[j]){
            arr3[count] = arr1[i];
            count++;
            i++;
        }
        else{
            arr3[count] = arr2[j];
            count++;
            j++;
        }
    }
    while(i<a){
        arr3[count] = arr1[i];
        i++;
        count++;
    }
    while(j<b){
        arr3[count] = arr1[j];
        j++;
        count++;
    }


    for(int k=0;k<c;k++){
        cout<<arr3[k]<<" ";
    }
}
int main(){
    int a1[]={4,6,8,9,12};
    int a2[]={2,3,12};
    int a3[8]={0};;
    mergearray(a1,5,a2,3,a3,8);

    return 0;

}
