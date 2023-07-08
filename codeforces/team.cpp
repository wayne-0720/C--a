#include <bits\stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int n, tmp, tsum = 0;
    vector<int> v, p, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> tmp;
            if (j == 1)
                p.push_back(tmp);
            else if (j == 2)
                v.push_back(tmp);
            else
                t.push_back(tmp);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (p[i] == 1 && v[i] == 1)
        {
            tsum++;
            continue;
        }
        else if (v[i] == 1 && t[i] == 1)
        {
            tsum++;
            continue;
        }
        else if (p[i] == 1 && t[i] == 1)
        {
            tsum++;
            continue;
        }
        else
        {
            continue;
        }
    }
    cout << tsum << endl;
    return 0;
}
