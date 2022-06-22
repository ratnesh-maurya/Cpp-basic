#include <iostream>
using namespace std;
int main()
{
    int d = 2;
    int a = 5;
    int n, sn = 0, an = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        an = a + i * d;
        cout << an << " ";
        sn = sn + an;
    }
    cout << sn;
    return 0;
}