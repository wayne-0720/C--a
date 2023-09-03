#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    while (cin >> a)
    {
        int n = 0;
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0)
            {
                n = n + i;
            }
        }
        n -= a;
        if (n == a)
        {
            cout << "完全數\n";
        }
        else if (n > a)
        {
            cout << "盈數\n";
        }
        else
        {
            cout << "虧數\n";
        }
    }
    return 0;
}
