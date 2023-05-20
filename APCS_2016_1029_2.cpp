#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int n, m, tmp, msum = 0;
    vector<int> v;
    vector<int> a;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> tmp;
            v.push_back(tmp);
        }
        for (int s = 0; s < (int)v.size() - 1; s++)
        {
            for (int a = 0; a < s - 1 - i; a++)
            {
                if (v[a] > v[a + 1])
                {
                    int tmp1 = v[a];
                    v[a] = v[a + 1];
                    v[a + 1] = tmp1;
                }
            }
        }
        msum += v[(int)v.size() - 1];
        a.push_back(v[(int)v.size() - 1]);
    }
    cout << msum << endl;
    for (int i = (int)a.size() - 1; i > 0; i--)
    {
        if (msum % a[i] == 0)
        {
            cout << a[i] << " ";
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