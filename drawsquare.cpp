#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, s;
    cin >> l;
    cin >> s;
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= s; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
