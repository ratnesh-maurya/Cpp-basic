//  The marks of a student out of 100 are entered through keyboard. Write a program to give him grades according to the given scheme:
// 0-33      : D
// 34-50   : C 
// 51-70   : B
// 71-90   : A
// 91-100 : A+
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the number"<<endl;
    cin>>number;
  if(number>=91 && number<=100)
        cout<<"A+";
    else if(number>=71 && number<=90)
        cout<<"A";
    else if(number>=51 && number<=70)
        cout<<"B";
    else if(number>=34 && number<=50)
        cout<<"C";
    else if(number>=0 && number<=33)
        cout<<"D";
    else
        cout<<"Invalid!";
    cout<<endl;
    return 0;
}
   