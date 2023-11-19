#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
    cin >> a;
    reverse(begin(a), end(a));
    int b = a.length() - 1;
    while (b)
    {
        if (a[b] == '0')
        {
            erase(a, b);
        }
        b--;
    }
    cout << a;
    cout << "\n";
    return 0;
}
