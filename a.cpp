#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long double ax[3], ay[3], nx[3], ny[3], dx[3], dy[3], as[3];
    int b;
    vector<long double> ns, ds;
    vector<string> s;
    for (int i = 0; i < 3; i++)
    {
        cin >> nx[i] >> ny[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> dx[i] >> dy[i];
    }
    for (int i = 0; i < 2; i++)
    {
        ns.push_back(sqrt(pow(nx[2 - i] - nx[1 - i], 2) + pow(ny[2 - i] - ny[1 - i], 2)));
        ds.push_back(sqrt(pow(dx[2 - i] - dx[1 - i], 2) + pow(dy[2 - i] - dy[1 - i], 2)));
    }
    ns.push_back(sqrt(pow(nx[2] - nx[0], 2) + pow(ny[2] - ny[0], 2)));
    ds.push_back(sqrt(pow(dx[2] - dx[0], 2) + pow(dy[2] - dy[0], 2)));
    sort(ns.begin(), ns.end());
    sort(ds.begin(), ds.end());
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> ax[i] >> ay[i];
        }
        for (int i = 0; i < 2; i++)
        {
            as[i] = sqrt(pow(ax[2 - i] - ax[1 - i], 2) + pow(ay[2 - i] - ay[1 - i], 2));
        }
        as[2] = sqrt(pow(ax[2] - ax[0], 2) + pow(ay[2] - ay[0], 2));
        sort(as, as + 3);
        if (ds[0] == as[0] && ds[1] == as[1] && ds[2] == as[2])
        {
            s.push_back("Doritos");
            continue;
        }
        else if (ns[0] == as[0] && ns[1] == as[1] && ns[2] == as[2])
        {
            s.push_back("Nijika");
            continue;
        }
        else
        {
            s.push_back("None");
            continue;
        }
    }
    for (auto &i : s)
    {
        cout << i << "\n";
    }
    return 0;
}