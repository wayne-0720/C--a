#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << (b - a > 0 ? b - a : 100 - a + b) << "\n";
    return 0;
}
