#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[N];
    }

    sort(arr, arr + N);
    int diff = arr[N] - arr[N - 1];
    cout << diff;
    return 0;
}