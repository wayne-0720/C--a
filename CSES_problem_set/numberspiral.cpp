#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        long long x, y;
        cin >> x >> y;
        long long d = max(x, y);
        long long ans = 1 + ((0 + (2 * (d - 1))) * d / 2);
        if (d == x)
        {
            if (d % 2 == 0)
            {
                ans += d - y;
                cout << ans << "\n";
            }
            else
            {
                ans -= d - y;
                cout << ans << "\n";
            }
        }
        else
        {
            if (d % 2 == 0)
            {
                ans -= d - x;
                cout << ans << "\n";
            }
            else
            {
                ans += d - x;
                cout << ans << "\n";
            }
        }
    }
    return 0;
}
