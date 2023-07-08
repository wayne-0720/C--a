#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
typedef std::pair<int, int> p;
int main()
{
    int k, t, s, sum = 0, bt, bw = 0;
    vector<p> v;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> t >> s;
        v.push_back(make_pair(t, s));
    }
    sort(v.begin(), v.end(), [](const p &x, const p &y)
         {if(x.second!=y.second)
        {
            return x.second >y.second;
        }
        return x.first <y.first; });
    for (int i = 0; i < (int)v.size(); i++)
    {
        if (v[i].second == -1)
        {
            bw = bw + 1;
            continue;
        }
    }
    sum = v[0].second - k - (bw * 2);
    if (sum <= 0)
    {
        cout << 0 << " ";
    }
    else
    {
        cout << sum << " ";
    }
    cout << v[0].first << endl;
    return 0;
}