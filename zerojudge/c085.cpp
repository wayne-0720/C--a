#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int z, i, m, l, t = 1;
    cin >> z >> i >> m >> l;
    while (true)
    {
        if (z == 0 && i == 0 && m == 0 && l == 0)
            break;
        for (int i = 0; i < m; i++)
        {
            v.push_back(0);
        }
        int rank = 1;
        while (!v[l])
        {
            v[l] = rank;
            l = (z * l + i) % m;
            rank++;
        }
        cout << "Case " << t++ << ": " << rank - v[l] << "\n";
        v.clear();
        cin >> z >> i >> m >> l;
    }
    return 0;
}
