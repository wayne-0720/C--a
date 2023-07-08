#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> x, y, a;
    int n, tx, ty, r = 0, l = 0, u = 0;
    a.push_back(2);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tx >> ty;
        x.push_back(tx);
        y.push_back(ty);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (x[i] == x[i + 1])
        {
            if (y[i + 1] > y[i])
            {
                a.push_back(1);
            }
            else
            {
                a.push_back(3);
            }
        }
        else
        {
            if (x[i + 1] > x[i])
            {
                a.push_back(2);
            }
            else
            {
                a.push_back(4);
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == 1)
        {
            if (a[i + 1] == 1)
            {
                continue;
            }
            else if (a[i + 1] == 2)
            {
                r++;
            }
            else if (a[i + 1] == 3)
            {
                u++;
            }
            else
            {
                l++;
            }
        }
        else if (a[i] == 2)
        {
            if (a[i + 1] == 1)
            {
                l++;
            }
            else if (a[i + 1] == 2)
            {
                continue;
            }
            else if (a[i + 1] == 3)
            {
                r++;
            }
            else
            {
                u++;
            }
        }
        else if (a[i] == 3)
        {
            if (a[i + 1] == 1)
            {
                u++;
            }
            else if (a[i + 1] == 2)
            {
                l++;
            }
            else if (a[i + 1] == 3)
            {
                continue;
            }
            else
            {
                r++;
            }
        }
        else
        {
            if (a[i + 1] == 1)
            {
                r++;
            }
            else if (a[i + 1] == 2)
            {
                u++;
            }
            else if (a[i + 1] == 3)
            {
                l++;
            }
            else
            {
                continue;
            }
        }
    }
    cout << l << " " << r << " " << u << endl;
}