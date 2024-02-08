#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mx = -1e9, arr[n];
    for (int &i : arr)
    {
        cin >> i;
        mx = max(i, mx);
    }

    cout << mx + 1 << ' ';
    for (int i : arr)
        cout << i << ' ';
    return 0;
}