#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> vp;
    for (int i = 0; i < m;i++)
    {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        vp.push_back(make_pair(tmp1, tmp2));
    }
    int q;
    cin >> q;
    for (int i = 0; i < q;i++)
    {
        int a;
        if(a==1)
        {
            int d, s, t;
            cin >> d >> s >> t;
            vp.erase(vp.begin() + d - 1);
            vp.insert(vp.begin() + d - 1, make_pair(s, t));
        }else
        {
            int s, t;
            cin >> s >> t;
            int m = t - s + 1;
            for (int j = 0; j < vp.size();j++)
            {
                
            }
        }
    }
        return 0;
}
