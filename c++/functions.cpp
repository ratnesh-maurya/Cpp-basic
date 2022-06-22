// #include <iostream>
// using namespace std;
// void pattern()
// {
//     int n;
//     cout << "enter the number of rows";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     pattern();
//     return 0;
// }
#include <iostream>
using namespace std;
int pow(int no, int po)
{
    int ans = 1;

    for (int i = 0; i < po; i++)
    {
        ans = ans * no;
    }
    return ans;
}
int main()
{
    int n, p;
    cout << "enter the number";
    cin >> n;
    cout << " enter power";
    cin >> p;
    cout << "answer is " << pow(n, p) << endl;

    return 0;
}