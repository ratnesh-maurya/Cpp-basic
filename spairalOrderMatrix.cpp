#include<iostream>
using namespace std;

// Time complexity O(nm)

int main()
{
    int n,m;
    cout<<"enter no of rows and coulmns"<<endl;
    cin>>n>>m;
    int arr[n][m];

    cout<<"Enter's elements"<<endl;
    for(int i=0; i<n; i++){
        for(int j =0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Spairal oraer matrix.."<<endl;
    int rowStart =0, rowEnd=n-1, colStart = 0, colEnd =m-1;
    while(rowStart <= rowEnd && colStart <= colEnd) {
        // first row left to right
        for(int col = colStart; col <= colEnd; col++){
            cout<<arr[rowStart][col]<<" ";
        }
        rowStart++;

        // last column downword
        for(int row = rowStart; row <= rowEnd; row++){
            cout<<arr[row][colEnd]<<" ";
        }
        colEnd--;

        // lart row right to left
        for(int col = colEnd;  col >= colStart; col--){
            cout<<arr[rowEnd][col]<<" ";
        }
        rowEnd--;

        // first column upword
        for(int row = rowEnd; row >= rowStart; row--){
            cout<<arr[row][colStart]<<" ";
        }
        colStart++;
    }
    return 0;
}
