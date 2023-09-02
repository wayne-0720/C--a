#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        int as[b];
        for (int i = 0; i < b; i++)
        {
            cin >> as[i];
        }
        sort(as, as + b, [](int c, int d)
             { return c < d; });
        cout << (as[b - 1] - as[0]) * 2 << "\n";
    }
    return 0;
}
