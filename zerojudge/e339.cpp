#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long> a, b;
    int c;
    cin >> c;
    for (int i = 0; i < c;i++)
    {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    b.push_back(a[0]);
    for (int i = 1; i < c;i++)
    {
        b.push_back(b[i - 1] + a[i]);
    }
    for(auto&it:b)
    {
        cout << it << " ";
    }
        return 0;
}
