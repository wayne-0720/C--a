#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    int mxa = a;
    bool first = 1;
    for (int i = 2; i <= mxa; i++)
    {
        int cnt = 0;
        while (a % i == 0)
        {
            a /= i;
            cnt++;
        }
        if (cnt >= 1)
        {
            if (!first)
                cout << " * ";
            first = 0;
            if (cnt > 1)
                cout << i << "^" << cnt;
            else
                cout << i;
        }
    }
    return 0;
}
