#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int i = a; i > 0; i--)
    {
        if (i == b || i == c || i == d)
        {
            continue;
        }
        cout << "No. " << i << "\n";
    }
    return 0;
}
