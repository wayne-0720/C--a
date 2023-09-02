#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (true)
    {
        int a;
        cin >> a;
        if (a == 0)
            break;
        if (a % t == 0)
        {
            cout << a / t << "\n";
        }
        else
        {
            cout << (t * (a / t + 1)) - a << "\n";
        }
    }
    return 0;
}
