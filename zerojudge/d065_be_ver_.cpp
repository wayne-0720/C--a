#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    if(a>b)
    {
        if(a>c)
            cout << a << "\n";
        else
            cout << c << "\n";
    }else if(a>c)
    {
        if(a>b)
            cout << a << "\n";
        else
            cout << b << "\n";
    }else
    {
        if(b>c)
            cout << b << "\n";
        else
            cout << c << "\n";
    }
    return 0;
}
