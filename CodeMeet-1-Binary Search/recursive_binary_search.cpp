#include <bits/stdc++.h>
using namespace std;

int recursiveBinary(int low, int high, int arr[], int k)
{
    if (high < low)
        return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == k)
        return mid;
    else if (k < arr[mid])
        return recursiveBinary(low, mid - 1, arr, k);
    else if (k > arr[mid])
        return recursiveBinary(mid + 1, high, arr, k);
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cin >> k;

    cout<<recursiveBinary(0, n-1, arr,k);

    return 0;
}
