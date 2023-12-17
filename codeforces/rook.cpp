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
        int c = stoi(s.substr(s.find("") + 1, s.length()));
        for (int j = 1; j < 9; j++)
        {
            if (j == c)
            {
                continue;
            }
            else
            {
                cout << s[0] << j << "\n";
            }
        }
        for (int j = 0; j < 8; j++)
        {
            char t = 'a' + j;
            if (t == s[0])
            {
                continue;
            }
            else
            {
                cout << t << s[1] << "\n";
            }
        }
    }
    return 0;
}
