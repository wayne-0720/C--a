#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    while (a--)
    {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        v.push_back(make_pair(tmp1, tmp2));
    }
    sort(v.begin(), v.end());
    for (auto &it : v)
    {
        cout << it.first << " " << it.second << "\n";
    }
    return 0;
}
