#include <iostream>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        if (A > 50)
            cout << A << endl;
        if (B > 50)
            cout << B << endl;
        if (C > 50)
            cout << C << endl;
        else
            cout << "NOTA" << endl;
    }

    return 0;
}