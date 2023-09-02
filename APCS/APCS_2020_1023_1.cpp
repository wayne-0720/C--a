#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> x, y, t;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        x.push_back(tmp1);
        y.push_back(tmp2);
    }
    for (int i = 0; i < a - 1; i++)
    {
        t.push_back(abs(x[i] - x[i + 1]) + abs(y[i] - y[i + 1]));
    }
    sort(t.begin(), t.end());
    cout << t[t.size() - 1] << " " << t[0] << "\n";
    return 0;
}
