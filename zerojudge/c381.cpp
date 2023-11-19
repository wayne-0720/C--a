#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    while (true)
    {
        string s = "";
        if (a == 0 && b == 0)
        {
            break;
        }
        for (int i = 0; i < a; i++)
        {
            string tmp;
            cin >> tmp;
            s.insert(s.size(), tmp);
        }
        int c[b];
        for (int i = 0; i < b; i++)
        {
            cin >> c[i];
        }
        for (int i = 0; i < b;i++)
        {
            cout << s[c[i]-1];
        }
        cout << "\n";
        cin >> a >> b;
    }
    return 0;
}
