#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while (cin >> n)
    {
        int tmp[n],a=0,b=0;
        for (int i = 0; i < n;i++)
        {
            cin >> tmp[i];
        }
        for (int i = 0; i < n - 1;i++)
        {
            a += abs(tmp[i + 1] - tmp[i]);
            b += (i + 1);
        }
        if(a==b)
        {
            cout << "Jolly\n";
        }else
        {
            cout << "Not jolly\n";
        }
    }
    return 0;
}
