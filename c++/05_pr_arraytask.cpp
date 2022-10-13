#include<iostream>
using namespace std;
int main(){
// reverse of array
// int a[10],i,n;
// cout<<"enter n\n";
// cin>>n;
// cout<<"enter array\n";
// for ( i = 0; i <= n; i++)
// {
//     cin>>a[i];
// }
// cout<<"array\n";
// for ( i = n; i >=0; i--)
// {
//    cout<<a[i]<<"\n";
// }


  //  multiplication of matrix
    int A[20][20] ,B[20][20], C[20][20],i,j,a,b,c,d;
    cout<<"enter number of row of 1st matrix\n";
    cin>>a;
    cout<<"enter number of column of 1st matrix\n";
    cin>>b;
    cout<<"enter number of row of 2nd matrix\n";
    cin>>c;
    cout<<"enter number of column of 2nd matrix\n";
    cin>>d;
           cout<<"enter matrix 1st\n";
    for ( i = 0; i< a; i++)
    {
       for ( j = 0; j < b; j++)
       {
           cin>>A[i][j];
       }
    } 
           cout<<"enter matrix 2nd\n";
    for ( i = 0; i < c; i++)
    {
       for ( j = 0; j < d; j++)
       {
           cin>>B[i][j];
       }
    } 
           cout<<" matrix 1st\n";
    for ( i = 0; i < a; i++)
    {
       for ( j = 0; j < b; j++)
       {
           cout<<A[i][j]<<" ";
       }
       cout<<"\n";
    } 
           cout<<" matrix 2nd\n";
    for ( i = 0; i < c; i++)
    {
       for ( j = 0; j < d; j++)
       {
           cout<<B[i][j]<<" ";
       }
       cout<<"\n";
    } 
    if (b!=c)
    {
      cout<<"multiplication is not possible";
    }
    else{
        for (int i = 0; i < a; i++)
        {
            for ( int k= 0; k < d; k++)
            {
                for ( j = 0; j <d ; j++)
                {
                C[i][k]=0;
             C[i][k]=C[i][k]+(A[i][j]*B[j][k]);
                }
                
            }

        }
    }
    cout<<"multiplication table is\n";
    for ( i = 0; i < a; i++)
    {
       for ( int k = 0; k < d; k++)
       {
           cout<<C[i][k]<<" ";
       }
       cout<<"\n";
    }
    return 0;
}
