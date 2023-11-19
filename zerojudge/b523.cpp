#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    set<string> m;
    int a = 1;
    string s;
    while (getline(cin, s))
    {
        if (m.count(s) == true)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
            m.insert(s);
        }
        a++;
    }
    return 0;
}
