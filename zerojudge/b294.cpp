#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, sum = 0;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        int tmp;
        cin >> tmp;
        sum = sum + tmp * i;
    }
    cout << sum << "\n";
    return 0;
}
