#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int s;
    cin >> s;
    if(s<=2500)
    {
        cout << 1 << " " << (s % 25 ? s / 25 + 1 : s / 25) << " " << (s % 25 ? s % 25 : 25) << "\n";
    }else if(s>7500)
    {
        s = s - 7500;
        cout << 3 << " " << (s % 25 ? s / 25 + 1 : s / 25) << " " << (s % 25 ? s % 25 : 25) << "\n";
    }else 
    {
        s = s - 2500;
        cout << 2 << " " << (s % 50 ? s / 50 + 1 : s / 50) << " " << (s % 50 ? s % 50 : 50) << "\n";
    }
    return 0;
}
