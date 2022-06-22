#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b;
    // float pi=3.146789678908;//
    double pi;
    char c;
    cin >> a >> b >> c >> pi;
    cout << "the value of a is " << ++a << " \nthe value of b is " << b++ << "\nthe value of pi is " << pi << "\nthe value of c is " << c;
    cout << "the value of a is  " << setw(8) << a << endl;
    cout << "the value of b is  " << setw(8) << b << endl;
    cout << "the value of pi is " << setw(8) << pi << endl;
    cout << "the value of c is  " << setw(8) << c << endl;
    return 0;
}
