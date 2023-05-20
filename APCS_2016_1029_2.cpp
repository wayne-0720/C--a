#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, m, tmp, msum = 0;
    vector<int> a;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        vector<int> v;
        for (int j = 0; j < m; j++)
        {
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        msum += v[(int)v.size() - 1];
        a.push_back(v[(int)v.size() - 1]);
    }
    cout << msum << endl;
    reverse(a.begin(), a.end());
    for (int i = (int)a.size() - 1; i >= 0; i--)
    {
        if (msum % a[i] == 0)
        {
            if (i == (int)a.size() - 1 )
            {
                cout << a[i];
            }else
            {
                cout << " " << a[i];
            }
            
        }
        else
        {
            a.pop_back();
        }
    }
    if (a.empty() == 1)
    {
        cout << -1;
    }
    return 0;
}