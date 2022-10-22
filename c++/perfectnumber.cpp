#include <iostream>
using namespace std;
// Perfect number is a number which is equal to the sum of its proper divisors. Some examples are 6,28,496 & 8,128.
int main()
{
    int i, num, b, sum = 0;
    cout << "Enter the number to check whether it is a perfect number: ";
    cin >> num;
    for (i = 1; i < num; i++)
    {
        b = num % i;
        if (b == 0)
            sum = sum + i;
    }
    if (sum == num)
        cout<<num<< " is a perfect number";
    else
        cout <<num<<" is not a perfect number";
    return 0;
}