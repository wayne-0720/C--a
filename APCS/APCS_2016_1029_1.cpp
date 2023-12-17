#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<ll> v;
    for (int i = 0; i < 3; i++)
    {
        ll tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for (auto &it : v)
    {
        cout << it << " ";
    }
    cout << "\n";
    if (v[0] + v[1] <= v[2])
    {
        cout << "No\n";
    }
    else
    {
        if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2])
        {
            cout << "Right\n";
        }
        else if (v[0] * v[0] + v[1] * v[1] > v[2] * v[2])
        {
            cout << "Acute\n";
        }
        else
        {
            cout << "Obtuse\n";
        }
    }
}