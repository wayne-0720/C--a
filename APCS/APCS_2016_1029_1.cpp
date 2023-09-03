#include <bits/stdc++.h>
using namespace std;
long long a, b, c, d, e, f;
int main()
{
    cin >> d >> e >> f;
    a = min({d, e, f});
    c = max({d, e, f});
    b = d + e + f - a - c;
    cout << a << " " << b << " " << c << "\n";
    if (a + b <= c)
        cout << "No";
    else
    {
        a *= a;
        b *= b;
        c *= c;
        if (a + b < c)
            cout << "Obtuse";
        else if (a + b == c)
            cout << "Right";
        else
            cout << "Acute";
    }
}