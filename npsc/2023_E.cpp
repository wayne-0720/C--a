#include <iostream>
#include <vector>

using namespace std;
bool mp[1005][1005];

int main()
{
    int n, m, s, t;
    cin >> n >> m >> s >> t;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++)
        {
            mp[i][j] = (str[j] == '1');
        }
    }

    bool top_s = false;
    bool bottom_s = false;
    for (int i = 0; i < n; ++i)
    {
        if (i < s && mp[i][0])
            top_s = true;
        else if (i > s && mp[i][0])
            bottom_s = true;
        if (top_s && bottom_s)
            return cout << "No", 0;
    }

    bool top_e = false;
    bool bottom_e = false;
    for (int i = 0; i < n; ++i)
    {
        if (i < t && mp[i][m - 1])
            top_e = true;
        else if (i > t && mp[i][m - 1])
            bottom_e = true;
        if (top_e && bottom_e)
            return cout << "No", 0;
    }

    for (int j = 0; j < m; j++)
    {
        bool has_coin = false;
        for (int i = 0; i < n; i++)
        {
            if (mp[i][j])
            {
                has_coin = true;
                break;
            }
        }
        if (!has_coin)
        {
            return cout << "Yes", 0;
        }
    }
    if (m % 2 == 0)
    {
        if (bottom_e && bottom_s)
            return cout << "Yes", 0;
    }
    else if ((bottom_e && top_s) || (bottom_s && top_e))
        return cout << "Yes", 0;

    cout << "No";
}