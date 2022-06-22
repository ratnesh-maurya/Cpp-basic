#include <iostream>
using namespace std;
int main()
{
    long int n;
    long int ans = 1;
    cout << "enter the no. to find factorial";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    cout << ans;
    return 0;
}