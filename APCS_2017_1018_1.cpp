#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2, a, ra, ro, rx;
    cin >> n1 >> n2 >> a;
    if (n1 == 0 && n2 == 0)
    {
        ra = 0;
    }
    else if (n1 == 0 && n2 != 0)
    {
        ra = 0;
    }
    else if (n1 != 0 && n2 == 0)
    {
        ra = 0;
    }
    else
    {
        ra = 1;
    }
    if (n1 == 0 && n2 == 0)
    {
        ro = 0;
    }
    else if (n1 == 0 && n2 != 0)
    {
        ro = 1;
    }
    else if (n1 != 0 && n2 == 0)
    {
        ro = 1;
    }
    else
    {
        ro = 1;
    }
    if (n1 == 0 && n2 == 0)
    {
        rx = 0;
    }
    else if (n1 == 0 && n2 != 0)
    {
        rx = 1;
    }
    else if (n1 != 0 && n2 == 0)
    {
        rx = 1;
    }
    else
    {
        rx = 0;
    }
    if (a == ra)
    {
        cout << "AND" << endl;
    }
    if (a == ro)
    {
        cout << "OR" << endl;
    }
    if (a == rx)
    {
        cout << "XOR" << endl;
    }
    if (a != ra && a != ro && a != rx)
    {
        cout << "IMPOSSIBLE" << endl;
    }
}