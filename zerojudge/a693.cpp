
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    while (cin >> a)
    {
        cin >> b;
        int c[a], d[a];
        for (int i = 0; i < a; i++)
        {
            cin >> c[i];
        }
        d[0] = c[0];
        for (int i = 1; i < a; i++)
        {
            d[i] = d[i - 1] + c[i];
        }
        for (int i = 0; i < b; i++)
        {
            int tmp1, tmp2;
            cin >> tmp1 >> tmp2;
            if(tmp1==1)
            {
                cout << d[tmp2 - 1]<<"\n";
            }else
            {
                cout << d[tmp2 - 1] - d[tmp1 - 2] << "\n";
            }
        }
    }
    return 0;
}
