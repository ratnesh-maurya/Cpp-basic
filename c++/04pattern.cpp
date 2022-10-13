#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // Question.1
    cout<<"pattern for Quetion 2\n";
    for (int i = 5; i >0; i--)
    {
       for ( int j = i; j <5; j++)
       {
          cout<<" ";
       }
         for (int k = i; k >0; k--)
       {
          cout<<"*";
       }
       cout<<endl;
    }

    // Question.2
    cout<<"\npattern for Question 2\n ";
        for (int i = 5; i >0; i--)
    {
       for ( int j = i; j <5; j++)
       {
          cout<<"  ";
       }
         for (int k = i; k >0; k--)
       {
          cout<<"*";
       }
       cout<<endl;
    }

    //Question.3
    cout<<"pattern for Question 3\n\n";

        for (int i = 0; i <5; i++)
    {
       for ( int j = i; j <=5; j++)
       {
          cout<<"  ";
       }
        for ( int k =0 ; k <(2*i)+1 ; k++)
       {
           if (k%2==1)
           {
             cout<<"  ";
           }
           else{
             cout<<"* ";
           }
       }
       cout<<"\n";
    }

      //  Question.4
    cout<<"pattern for Question 4\n";

        for (int i = 0; i <5; i++)
    {
       for ( int j = i; j <4; j++)
       {
          cout<<" ";
       }
       for (int k = 0; k <=i; k++)
       {
           cout<<"*";
       }
       cout<<endl;

     }
             for (int i = 4; i >0; i--)
    {
       for (int r = i; r <=4; r++ )
       {
           cout<<" ";
       }
       for (int k = i; k > 0; k--)
       {
          cout<<"*";
       }

       cout<<"\n";
    }

         //   Question.5
    cout<<"pattern for Question 5\n";
    for (int i = 0; i <=3; i++)
    {
        for (int j = i; j <3; j++)
        {
            cout<<"*";
              }
          for (int k = i; k<(3*i)+1; k++)
          {
          cout<<" ";
             }
             for (int l = i; l < 3; l++)
             {
               cout<<"*";
             }

              cout<<"\n";
    }
    for (int i = 2; i >=0; i--)
    {
        for (int j = i; j <3; j++)
        {
            cout<<"*";
              }
          for (int k = (2*i)+1; k>0; k--)
          {
          cout<<" ";
             }
             for (int l = i; l <3; l++)
             {
               cout<<"*";
             }
              cout<<"\n";
    }
  // Question.6
     cout<<"pattern for Question 6\n";
    for (int i = 1; i <= 5; i++)
    {
      for (int k = i; k <= 5; k++)
      {
        cout<<"  ";
      }

      for (int j = 1; j <= (2*i)-1; j++)
      {
        cout<<" ";
       cout<<j;
      }
      cout<<endl;
    }
   // Question.7
      cout<<"pattern for Question 7\n";
      for (int i = 0; i < 5; i++)
      {
        for (int j = i; j <4 ; j++)
        {
         cout<<"  ";
        }
        for (int k=0; k <(2*i)+1; k++)
        {
          if (k==0 )
          {
           cout<<i+1;
           cout<<" ";
          }
          else if (k==(2*i))
          {
            cout<<i+1;
            cout<<" ";
          }
          else{
            cout<<"0";
            cout<<" ";
          }
        }
        cout<<endl;
      }
     // Question.8
       cout<<"pattern for Question 8\n";
       for (int i = 10; i >0; i--)
       {
          for (int j = i-1; j >0; j--)
          {
             cout<<"  ";
          }
          for (int k = i; k<=10; k++)
          {
              if (k==10)
              {
                  cout<<"0 ";
              }
              else cout<<k<<" ";
          }
          for (int l = 9; l >i-1; l--)
          {
              cout<<l<<" ";
                        }
          cout<<"\n";
       }
      //    Question.9
       cout<<"pattern for Question 9\n";
       for (int i = 0; i < 5; i++)
       {
           for (int j = i; j >=0; j--)
           {
               if (i==j||j==0||i==4)
               {
                  cout<<"* ";
               }
               else cout<<"  ";
           }
           cout<<"\n";
       }
   // random pattern
    cout<<"pattern\n";
    int n;
    cout<<"enter n\n";
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        for (int j =0; j<i; j++)
        {
          cout<<pow(2,i+j)<<"  ";
        }
       cout<<"\n";
    }

//question 10
int val=1;
for (int i=0; i<5; i++)
{ 
  for (int k=0; k<=5 ; k++)
  {
    cout<<"  "<<val;
    val=val*(i-k)/(k+1);
    cout<<i;
  }     
  cout<<endl<<endl;
      return 0;
  }
}




