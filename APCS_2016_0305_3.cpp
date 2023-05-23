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
        v.push_back(tmp1);
        v.push_back(tmp2);
        for (int j = tmp1; j < tmp2; j++)
        {
            l[j] = 1;
        }
    }
    sort(v.begin(), v.end());
    for (int i = v[0]; i < v[(int)v.size() - 1]; i++)
    {
        sum += l[i];
    }
    cout << sum << endl;
    return 0;
}