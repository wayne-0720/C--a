#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    for (int i = 0; i < a;i++)
    {
        int h1, m1, h2, m2, t1, t2, r;
        cin >> h1 >> m1 >> h2 >> m2 >> r;
        t1 = h1 * 60 + m1;
        t2 = h2 * 60 + m2;
        if((t2-t1)>=r)
        {
            cout << "Yes\n";
        }else
        {
            cout << "No\n";
        }
    }
    return 0;
}
