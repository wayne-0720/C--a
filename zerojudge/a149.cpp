#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int sum = 1;
        cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            sum *= s[j] - '0';
        }
        cout << sum << "\n";
    }
    return 0;
}
