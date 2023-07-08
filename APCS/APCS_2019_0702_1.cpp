#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h1 = 0, g1 = 0, h2 = 0, g2 = 0, tmp;
    for (int i = 1; i <= 4; i++)
    {
        cin >> tmp;
        h1 += tmp;
    }
    for (int i = 1; i <= 4; i++)
    {
        cin >> tmp;
        g1 += tmp;
    }
    for (int i = 1; i <= 4; i++)
    {
        cin >> tmp;
        h2 += tmp;
    }
    for (int i = 1; i <= 4; i++)
    {
        cin >> tmp;
        g2 += tmp;
    }
    cout << h1 << ":" << g1 << endl;
    cout << h2 << ":" << g2 << endl;
    if (h1 > g1 && h2 > g2)
    {
        cout << "Win" << endl;
    }
    else if (h1 < g1 && h2 < g2)
    {
        cout << "Lose" << endl;
    }
    else
    {
        cout << "Tie" << endl;
    }
    return 0;
}