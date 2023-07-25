#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, n, nsum = 0, sum = 0, tmp;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        cin >> tmp;
        sum += tmp;
    }
    for (int i = 1; i <= n; i++)
    {
        nsum += i;
    }
    a = nsum - sum;
    cout << a << endl;
}