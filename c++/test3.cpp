#include <iostream>
using namespace std;
long divide(long n)
{
    long A = n / 5;
    return A;
}
int main()
{
    // your code goes here
    int T;
    for (int i = 0; i < T; i++)
    {

        long No, ans;
        cin >> No;
        ans = divide(No);
        cout << ans;
    }

    return 0;
}
