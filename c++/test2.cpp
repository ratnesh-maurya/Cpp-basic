#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main()
{
    // your code goes here
    ll arr[3];
    ll a, b, c;
    cin >> a >> b >> c;
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    sort(arr, arr + 3);
    if (arr[2] > arr[1] + arr[0])
        cout << "YES";
    else
        cout << "NO";
    return 0;
}