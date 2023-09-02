#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] >= s[i + 1])
        {
            cout << s[i] - s[i + 1];
        }
        else
        {
            cout << s[i + 1] - s[i];
        }
    }
    return 0;
}
