#include <bits/stdc++.h>
using namespace std;
int b[100];
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (true)
    {
        int a,av=0,mv=0;
        cin >> a;
        if(a==0)
            break;
        for (int i = 0; i < a;i++)
        {
            cin >> b[i];
            av += b[i];
        }
        av /= a;
        for (int i = 0; i < a;i++)
        {
            if(b[i]>av)
                mv = mv + b[i] - av;
            else
                continue;
        }
        cout << "Set #" << t << "\n";
        cout << "The minimum number of moves is " << mv << ".\n";
        cout << "\n";
        t++;
    }

    return 0;
}
