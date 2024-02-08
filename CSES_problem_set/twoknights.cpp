#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {

        cout << (i * i) * (i * i - 1) / 2 - 4 * (i - 2) * (i - 1) << "\n";
    }
    return 0;
}
