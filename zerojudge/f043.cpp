#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b;
    if (a == b)
    {
        c = b - 3;
        b = a - c;
        cout << min(c, b) << "+" << max(c, b) << "=" << a << "\n";
    }
    else
    {
        c = a - b;
        cout << min(c, b) << "+" << max(c, b) << "=" << a << "\n";
    }
    return 0;
}
