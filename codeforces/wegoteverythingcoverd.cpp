#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b, c;

        cin >> b >> c;
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                char d = 'a' + k;
                cout << (char)d;
            }
        }
        cout << "\n";
    }
    return 0;
}
