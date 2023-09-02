#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    map<int, int> l;
    int n, tmp1, tmp2, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp1 >> tmp2;
        for (int j = tmp1; j < tmp2; j++)
        {
            l[j] = 1;
        }
    }
    for (auto &it : l)
    {
        if (it.second != 0)
            sum++;
    }
    cout << sum << "\n";
    return 0;
}