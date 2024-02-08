#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        vector<int> v;
        for (int i = 0; i < 3; i++)
        {
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        if (v[2] < v[1] + v[0])
        {
            sum++;
        }
    }
    cout << sum;
    return 0;
}
