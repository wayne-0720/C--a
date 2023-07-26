#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string b[100];
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    for (auto &c : b)
    {
        a--;
        if (c.length() <= 10)
        {
            cout << c << "\n";
        }
        else
        {
            cout << c[0] << (c.length() - 2) << c[c.length() - 1] << "\n";
        }
        if (a == 0)
            break;
    }
    return 0;
}