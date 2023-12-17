#include <bits/stdc++.h>
using namespace std;
#define int long long
int s = 0;
signed main(signed argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    vector<int> v;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    for (int i = 1; i < a; i++)
    {
        if (v[i] < v[i - 1])
        {
            s += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
        else
        {
            continue;
        }
    }
    cout << s << "\n";
    return 0;
}
