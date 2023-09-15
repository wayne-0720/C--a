#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, a;
    while (cin >> n)
    {
        cin >> k;
        int sum = 0;
        a = n;
        sum += n;
        while (a / k != 0)
        {
            sum += a / k;
            a = a / k + a % k;
        }
        cout << sum << "\n";
    }
    return 0;
}
