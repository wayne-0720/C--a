#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, i;
    vector<int> v;
    cin >> a;
    if (a == 1)
    {
        cout << 1 << "\n";
    }
    else if (a < 4)
    {
        cout << "NO SOLUTION\n";
    }
    else if (a % 2 == 0)
    {
        i = 2;
        while (i <= a)
        {
            cout << i << " ";
            i = i + 2;
        }
        i = 1;
        while (i <= a)
        {
            cout << i << " ";
            i = i + 2;
        }
    }
    else
    {
        i = 1;
        while (i <= a)
        {
            cout << i << " ";
            i = i + 2;
        }
        i = 2;
        while (i <= a)
        {
            cout << i << " ";
            i = i + 2;
        }
    }

    return 0;
}
