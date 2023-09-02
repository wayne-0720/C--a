#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cin >> a;
    for (int i = 1; i <= a;i++)
    {
        int b, e,sum=0;
        cin >> b >> e;
        for (int j = b; j <= e;j++)
        {
            if(j%2==1)
            {
                sum += j;
            }
        }
        cout << "Case "<<i<<": " << sum << "\n";
    }
    return 0;
}
