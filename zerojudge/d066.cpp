#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, t = 0;
    cin >> a >> b;
    t = a * 60 + b;
    if (t < 450 || t >= 1020)
    {
        cout << "Off School\n";
    }
    else
    {
        cout << "At School\n";
    }
    return 0;
}
