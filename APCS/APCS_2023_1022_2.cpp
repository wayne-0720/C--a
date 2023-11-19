#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v[n];
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n;j++)
        {
            int tmp;
            cin >> tmp;
            v[i].push_back(tmp);
        }
    }
    
    return 0;
}
