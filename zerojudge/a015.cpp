#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int b, c;
    while (cin >> b)
    {
        cin >> c;
        int a[100][100];
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < c; j++)
                cin >> a[i][j];
        }
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < b; j++)
                cout << a[j][i] << " ";
            cout << "\n";
        }
    }
    return 0;
}
