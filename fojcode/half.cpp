#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    while (a != 1)
    {
        if (a % 2 == 1)
        {
            cout << "YES\n";
            break;
        }
        a = a / 2;
    }
    if (a == 1)
    {
        cout << "NO\n";
    }

    return 0;
}
