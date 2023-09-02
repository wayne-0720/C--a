#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double a, b;
    while (cin >> a)
    {
        double sum = 0;
        for (int i = 1; i <= a; i++)
        {
            cin >> b;
            sum += b;
        }
        sum /= a;
        if (sum > 59)
        {
            cout << "no\n";
        }
        else
        {
            cout << "yes\n";
        }
    }
    return 0;
}
