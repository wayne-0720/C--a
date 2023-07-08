#include <bits\stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, k, np = 0;
    vector<int> v;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    np = k;
    for (int i = k - 1; i < v.size(); i++)
    {
        if (v[0] <= 0)
        {
            np = 0;
            break;
        }
        if (v[k - 1] == v[i])
        {
            np += 1;
        }
        else
        {
            break;
        }
    }
    if (v[k - 1] == v[v.size() - 1] && v[0] > 0)
    {
        np--;
    }
    cout << np << endl;
    return 0;
}
