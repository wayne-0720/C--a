#include <bits/stdc++.h>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    map<int, int> l;
    vector<int> v;
    int n, tmp1, tmp2, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp1 >> tmp2;
        if (l.count(tmp1) == 0)
            v.push_back(tmp1);
        if (l.count(tmp2) == 0)
            v.push_back(tmp2);
        for (int j = tmp1; j < tmp2; j++)
        {
            l[j] = 1;
        }
    }
    sort(v.begin(), v.end());
    for (auto &it : l)
    {
        if (it.second == 0)
            continue;
        else
            sum++;
    }
    cout << sum << endl;
    return 0;
}