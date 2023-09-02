#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        int b[5];
        for (int i = 0; i < 4; i++)
        {
            cin >> b[i];
        }
        if (b[1] - b[0] == b[2] - b[1] && b[3] - b[2] == b[2] - b[1])
        {
            b[4] = b[3] + (b[1] - b[0]);
            for (auto &it : b)
            {
                cout << it << " ";
            }
        }else
        {
            b[4] = b[3] * (b[1] / b[0]);
            for (auto &it : b)
            {
                cout << it << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
