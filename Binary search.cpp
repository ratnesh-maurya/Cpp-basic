#include<iostream>
using namespace std;

// time complexity  O(logn)

int main(){
	int n;
	cout<<"Enter the size of array "<<endl;
	cin>>n;
	int arr[n],s,e,mid,x;
//	s=start,e=end,m=mid
	cout<<"Enter the element of array "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int item;
	cout<<"Enter the element to search "<<endl;
	cin>>item;
	s=0;
	e=n;
	while(s<=e){
		mid=(s+e)/2;
		if(item==arr[mid]){
			x=0;
			cout<<"Item found at index "<<mid<<endl;
			break;
		}
		else if(item<arr[mid]){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	if(x!=0){
		cout<<"Item not found"<<endl;
	}
	return 0;		
}
