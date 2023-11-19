#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x, n,tmp, r = 0, l = 0, rm=-1000, lm=1000;
    cin >> x >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> tmp;
        if(tmp>x)
        {
            r++;
            rm = max(rm, tmp);
        }else
        {
            l++;
            lm = min(lm, tmp);
        }
    }
    if(r>l)
    {
        cout << r << " " << rm << "\n";
    }else
    {
        cout << l << " " << lm << "\n";
    }
        return 0;
}
