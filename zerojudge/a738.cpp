#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y)
{
    if(x%y==0)
    {
        return y;
    }else
    {
        return gcd(y, x % y);
    }
}
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    while (cin>>a)
    {
        int b;
        cin >> b;
        cout<<gcd(a, b)<<"\n";
    }
    return 0;
}
