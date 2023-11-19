#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n, k, ans = 0;
    cin >> n >> m >> k;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < m; i++)
    {
        int tmp;
        cin >> tmp;
        b.push_back(tmp);
    }
    sort(b.begin(), b.end());
    while (!b.empty() && !a.empty())
    {
        if (a.back() <= b.back() + k && a.back() >= b.back() - k)
        {
            ans++;
            b.pop_back();
            a.pop_back();
        }
        else if (b.back() - k >= a.back())
            b.pop_back();
        else
            a.pop_back();
    }
    cout << ans;
    return 0;
}