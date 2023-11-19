#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int a = s.size() - 1;
    for (int i = 0; i < s.size(); i++)
    {
        cout << s << "\n";
        s = s.assign(s, 1, a) + s[0];
    }
    return 0;
}
