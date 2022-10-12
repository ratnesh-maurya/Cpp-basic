#include<iostream>
using namespace std;
int binarySearch(int arr[],int key,int n,int s,int e){

    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]>key){
            e=mid;
        }
        else if(arr[mid]==key){
            return mid;
        }
        else{
            s=mid;
        }
    }
    return -1;
}
getpiviot(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid=(s+e)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}
int main(){
    int arr[]={7,9,1,2,3};
    int key=3;
    int piviot = getpiviot(arr,5);
    if(arr[piviot]=<key && arr[4]>=key){
        cout<<binarySearch(arr,key,5,piviot,5-1);
    }
    else{
        cout<<binarySearch(arr,key,5,0,piviot-1);
    }
    return 0;

}
