#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int y;
    while (cin >> y)
    {
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
            cout << "a leap year\n";
        else
            cout << "a normal year\n";
    }
    return 0;
}
