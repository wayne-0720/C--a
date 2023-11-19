#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    while (cin>>a)
    {
        int b[a];
        for (int i = 0; i < a;i++)
        {
            cin >> b[i];
        }
        sort(b, b + a, [](const int &c, const int &d)
             { return c < d; });
        for(auto& it:b)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
