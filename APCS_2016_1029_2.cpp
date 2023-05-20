#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int n, m, tmp, msum;
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
        for (int s = (int)v.size() - 1; s > 0; s--)
        {
            for (int a = 0; a <= s - 1; a++)
            {
                if (v[a] < v[j + 1])
                {
                    int tmp1 = v[a];
                    v[a] = v[a + 1];
                    v[a + 1] = tmp1;
                }
            }
        }
        sum += v[0];
        a.push_back(v[0]);
    }
    cout << sum << endl;
    for (int i = n - 1; i > 0; i--)
    {
        if (sum % a[i] == 0)
        {
            cout << a[i] << " ";
        }
        else
        {
            a.pop_back();
        }
    }
    if (a.empty() == 0)
    {
        cout << -1;
    }
    cout << endl;
    return 0;
}