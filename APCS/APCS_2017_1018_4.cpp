#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>

bool cmp(pii a, pii b) {
    return a.first * b.second < a.second * b.first;
}
signed main()
{
    int n;
    cin >> n;
    vector<pii> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back({a, 0});
    }
    for (int i = 0; i < n;i++)
    {
        cin >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    int total_e = 0;
    int total_w = v[0].first;
    for (int i = 1; i < n;i++)
    {
        total_e += (total_w * v[i].second);
        total_w += v[i].first;
    }
    cout << total_e;
    return 0;
}
