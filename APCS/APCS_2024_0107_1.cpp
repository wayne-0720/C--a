#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first * a.first + a.second * a.second > b.first * b.first + b.second * b.second;
}
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<int, int>> v;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        v.push_back(make_pair(tmp1, tmp2));
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[1].first << " " << v[1].second << "\n";
    return 0;
}
