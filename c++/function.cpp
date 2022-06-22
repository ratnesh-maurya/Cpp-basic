// #include <iostream>

// using namespace std;

// float factorial(float n)
// {
//     int ans = 1;
//     for (int i = n; i > 0; i--)
//     {
//         ans = ans * i;
//     }
//     return ans;
// }

// int main()
// {
//     int no;
//     cout << " enter n for facyorial:";
//     cin >> no;
//     int answer = factorial(no);
//     cout << answer;

//     return 0;
// }
#include <iostream>

using namespace std;

float division(float dividend, float divisor)
{
    float ans = dividend / divisor;
    return ans;
}

int main()
{

    float dividend, divisor;
    cout << "enter divided";
    cin >> dividend;
    cout << "enter divisor";
    cin >> divisor;
    float answer = division(dividend, divisor);
    cout << answer;
    return 0;
}