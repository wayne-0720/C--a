#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    set<int> s;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int tmp;
        cin >> tmp;
        s.insert(tmp);
    }
    cout << s.size() << "\n";
    return 0;
}
