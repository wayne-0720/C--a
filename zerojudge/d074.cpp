#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    vector<int> v;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    cout << *max_element(v.begin(), v.end()) << "\n";
    return 0;
}
