#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        if (a == 1)
        {
            cout << b + c << "\n";
        }
        else if (a == 2)
        {
            cout << b - c << "\n";
        }
        else if (a == 3)
        {
            cout << b * c << "\n";
        }
        else
        {
            cout << b / c << "\n";
        }
    }
    return 0;
}
