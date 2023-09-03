#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    while (true)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            break;
        }
        else if (a == 1)
        {
            cout << "\n";
        }
        else
        {
            for (int i = 1; i < a; i++)
            {
                if (i % 7 == 0)
                {
                    continue;
                }
                else
                {
                    cout << i << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
