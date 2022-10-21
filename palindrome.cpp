#include <iostream>
using namespace std;
int main()
{
    // A palindrome number is a number that is same after reverse. Some examples of palindrome numbers are 121, 3443, 6776, 191, 48984 etc.

    int num, t, b, sum = 0;
    cout << "Enter the number to check palindrome: ";
    cin >> num;
    t = num;
    while (num != 0)
    {
        b = num % 10;
        num = num / 10;
        sum = sum * 10 + b;
    }
    if (t == sum)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a Palindrome";
    }
    return 0;
}