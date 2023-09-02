#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    a = a + 24 - 15;
    if(a<=23)
    {
        cout << a << "\n";
    }else
    {
        cout << a - 24 << "\n";
    }
    return 0;
}
