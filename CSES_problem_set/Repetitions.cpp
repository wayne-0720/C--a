#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    set<int> s;
    int a = 1;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == str[i + 1])
        {
            a++;
            s.insert(a);
        }
        else
        {
            s.insert(a);
            a = 1;
        }
    }
    auto iter = s.end();
    iter--;
    cout << *iter << "\n";
}