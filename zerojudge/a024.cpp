#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    while(true)
    {
        if(a%b==0)
        {
            cout << b << "\n";
            break;
        }else
        {
            int tmp;
            tmp = b;
            b = a % b;
            a = tmp;
        }
    }
    return 0;
}
