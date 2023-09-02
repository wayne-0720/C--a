#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    #define int long long
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long> v;
    int f;
    cin >> f;
    for (int i = 1; i <= f; i++)
    {
        int b,sum=0;
        cin >> b;
        for (int j = 1; j <= b; j++)
        {
            int d, a, e;
            cin >> d >> a >> e;
            sum += d * e;
        }
        v.push_back(sum);
    }
    for (auto&it:v)
    {
        cout << it << "\n";
    }
    return 0;
}
