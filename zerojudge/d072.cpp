#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        int y;
        cin >> y;
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
            cout << "Case " << i << ": a leap year\n";
        else
            cout << "Case " << i << ": a normal year\n";
    }
    return 0;
}
