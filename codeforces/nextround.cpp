#include <bits\stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
bool mycompare(int a, int b)
{
    return a > b;
}
int main()
{
    int n, k, np = 0, a;
    vector<int> v;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), mycompare);
    np = k;
    for (int i = k; i < v.size(); i++)
    {
        if (v[0] <= 0)
        {
            np = 0;
            break;
        }
        if (v[k - 1] == v[i])
        {
            np++;
        }
        else
        {
            break;
        }
    }
    if (v[0] == 0)
    {
        np = 0;
    }
    else if (v[np] == 0)
    {
        np = np;
    }
    else if (np == n)
    {
        a = np - 1;
        for (int i = a; i >= 0; i--)
        {
            if (v[0] <= 0)
            {
                break;
            }
            else if (v[i] == 0)
            {
                np--;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        a = np;
        for (int i = a; i >= 0; i--)
        {
            if (v[0] <= 0)
            {
                break;
            }
            else if (v[i] == 0)
            {
                np--;
            }
            else
            {
                break;
            }
        }
    }

    cout << np << endl;
    return 0;
}
