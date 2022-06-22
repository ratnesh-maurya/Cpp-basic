#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "main menu\n";
    cin >> i;

    switch (i)
    {
    case 10:
        cout << "value is 10";
        break;
    case 15:
        cout << "value is 15";
        break;
    default:
        cout << "not found ";
    }
    return 0;
}