#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<pair<int, int>> v;
    int a, sum = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        v.push_back(make_pair(tmp1, tmp2));
    }
    sort(v.begin(), v.end());
    for (auto &it : v)
    {
        if (it.second > 100)
        {
            cout << it.first << " ";
            sum += (it.second - 100) * 5;
        }
    }
    cout << "\n"
         << sum << "\n";
    return 0;
}
