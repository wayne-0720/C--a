#include <bits/stdc++.h>
#define long long int
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    cout << *max_element(a,a+3) << "\n";
    return 0;
}
