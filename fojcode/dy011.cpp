#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;
    int b[a + 1], c[a];
    for (int i = 0; i < a; i++)
    {
        cin >> b[i + 1];
        c[i] = b[i + 1];
    }
    sort(c, c + a);
    b[0] = c[a - 1] + 1;
    for (int it : b)
    {
        cout << it << " ";
    }
    return 0;
}
