#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size() ; i++)
    {
        char c = str[i] - 7;
        cout << c;
    }
    cout << "\n";
    return 0;
}
