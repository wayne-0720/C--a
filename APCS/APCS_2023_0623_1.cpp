#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    int n, tx, ty, x = 0, y = 0, r = 0, l = 0, u = 0;
    a.push_back(2);
    cin >> n;
    cin >> tx >> ty;
    for (int i = 1; i < n; i++)
    {
        cin >> x >> y;
        if (x > tx)
            a.push_back(2);
        else if (y < ty)
            a.push_back(3);
        else if (x < tx)
            a.push_back(4);
        else
            a.push_back(1);
        if (a[i] == (a[i - 1] + 1) % 4)
            r++;
        if (a[i] == (a[i - 1] + 2) % 4)
            u++;
        if (a[i] == (a[i - 1] + 3) % 4)
            l++;
        tx = x;
        ty = y;
    }
    cout << l << " " << r << " " << u << endl;
}