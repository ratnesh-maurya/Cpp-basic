#include <iostream>

using namespace std;

bool isprime(int n)
{
    if (n == 1)
    {
        return true;
    }
    {
        int i;
        for (i = 2; i * i <= n; i++)

        {
            if ((n % i) == 0)
                return false;
        }
        return true;
    }
}

int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    if (isprime(n))
    {
        cout << n << " is a prime number" << endl;
    }
    else
    {
        cout << "is not a prime number ";
    }
    return 0;
}