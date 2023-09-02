#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, a1 = 0, a2 = 0, a3 = 0;
    cin >> a;
    for (int i = 1; i <= a;i++)
    {
        int d;
        cin >> d;
        if(d%3==1)
        {
            a1++;
        }else if(d%3==2)
        {
            a2++;
        }else
        {
            a3++;
        }
    }
    cout << a3 << " " << a2 << " " << a1 << "\n";
    return 0;
}
