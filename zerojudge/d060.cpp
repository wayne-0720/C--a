#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cin >> a;
    if(a<=25)
    {
        cout << 25 - a << endl;
    }else
    {
        cout << 60 - (a - 25) << endl;
    }
    return 0;
}
