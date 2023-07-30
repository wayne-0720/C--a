#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    int a, dw = 0, aw = 0;
    cin >> a;
    cin >> s;
    for (auto &c : s)
    {
        if (c == 'A')
            aw++;
        else
            dw++;
    }
    if (aw > dw)
    {
        cout << "Anton\n";
    }
    else if (aw < dw)
    {
        cout << "Danik\n";
    }
    else
    {
        cout << "Friendship\n";
    }
    return 0;
}