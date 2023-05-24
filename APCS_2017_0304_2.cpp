#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v, e{0};
    int n, tmp, tt = 0, tmp2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    for (int i = 0; i < n; i++)
    {
        tmp2 = i;
        if (i == e[i])
        {
            continue;
        }
        else
        {
            while (v[tmp2] != e[i])
            {
                e.push_back(v[i]);
                v[tmp2] = tmp2;
                tt++;
                sort(e.begin(), e.end());
            }
        }
    }
    cout << tt << endl;
    return 0;
}
