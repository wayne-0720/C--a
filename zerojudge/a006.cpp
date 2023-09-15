#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    if (pow(b, 2) - 4 * a * c < 0)
    {
        cout << "No real root\n";
    }
    else if (pow(b, 2) - 4 * a * c == 0)
    {
        int d = -b / (2 * a);
        cout << "Two same roots x=" << d << "\n";
    }
    else
    {
        int d = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        int e = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        cout << "Two different roots x1=" << d << " , x2=" << e << "\n";
    }
    return 0;
}
