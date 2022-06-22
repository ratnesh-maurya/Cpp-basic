#include <iostream>

using namespace std;

char firstcap(char arr[10], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
            return arr[i];
    }
}
int main()
{
    int n = 10;
    char arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "First Capital Character is  " << firstcap(arr, n);

    return 0;
}