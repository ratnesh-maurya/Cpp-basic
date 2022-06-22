#include <iostream>
using namespace std;

void change(int &no)
{
    no = no * no;
    cout << no << endl;
}
int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    change(n);
    cout << n << endl;
    return 0;
}
