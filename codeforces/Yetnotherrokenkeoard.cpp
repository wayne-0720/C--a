#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; i < s.size(); j++)
        {
            if (s[j] == 'b')
            {
                s.erase(s.begin() + j - 1);
                for (int k = j - 1; k > 0; k--)
                {
                    if (s[k] >= 97 && s[k] <= 122)
                    {
                        s.erase(s.begin() + k - 1);
                    }
                }
                if (j == 0)
                {
                    continue;
                }
                else
                {
                    j--;
                }
            }
            else if (s[j] == 'B')
            {
                s.erase(s.begin() + j - 1);
                for (int k = j - 1; k > 0; k--)
                {
                    if (s[k] >= 65 && s[k] <= 90)
                    {
                        s.erase(s.begin() + k - 1);
                    }
                }
                if (j == 0)
                {
                    continue;
                }
                else
                {
                    j--;
                }
            }
            else
            {
                continue;
            }
        }
        cout << s << "\n";
    }
    return 0;
}
