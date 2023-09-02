#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int h1, m1, h2, m2;
    while (true)
    {
        int a;
        cin >> h1 >> m1 >> h2 >> m2;
        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
            break;
        if(h2 == h1 && m2 - m1 >= 0)
        {
            cout << m2 - m1 << "\n";
        }
        else if (h2 - h1 <= 0)
        {
            a = (h2 + 24 - h1) * 60 + m2 - m1;
            cout << a << "\n";
        }
        else
        {
            a = (h2 - h1) * 60 + m2 - m1;
            cout << a << "\n";
        }
    }
    return 0;
}
