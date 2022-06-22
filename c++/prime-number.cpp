#include <iostream>
using namespace std;
int main()
{

    int n, i;
    cout << "enter the number to find" << endl;
    cin >> n;
    for (i = 2; i < i * i < n; i++)
    {
        if ((n % i) == 0)
        {
            cout << i << endl;
            cout << "not prime" << endl;
            break;
        }
    }
    if (i * 1 == n)
    {
        cout << "is a prime";
    }

    return 0;
}