#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < (int)v.size(); i++)
    {
        if (i == 0)
        {
            cout << v[i];
        }
        else
        {
            cout << " " << v[i];
        }
    }
    cout << endl;
    if (v[0] >= 60)
    {
        cout << "best case" << endl;
    }
    else
    {
        for (int i = 0; i <= (int)v.size() - 1; i++)
        {
            if (v[(int)v.size() - 1] < 60)
            {
                cout << v[(int)v.size() - 1] << endl;
                break;
            }
            else if (v[i] >= 60)
            {
                cout << v[i - 1] << endl;
                break;
            }
        }
    }
    if (v[(int)v.size() - 1] < 60)
    {
        cout << "worst case" << endl;
    }
    else
    {
        for (int i = (int)v.size() - 1; i >= 0; i--)
        {
            if (v[0] >= 60)
            {
                cout << v[0] << endl;
                break;
            }
            else if (v[i] < 60)
            {
                cout << v[i + 1] << endl;
                break;
            }
        }
    }
    return 0;
}