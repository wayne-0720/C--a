#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n % 2 == 1)
    {
        cout << n << '\n';
        for (int i = 1; i <= n; i++)
        {
            cout << i << ' ' << m << '\n';
        }
    }
    else if (m % 2 == 1)
    {
        cout << m << '\n';
        for (int i = 1; i <= m; i++)
        {
            cout << n << ' ' << i << '\n';
        }
    }
    else
    {
        cout << n * m << '\n';
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << i << ' ' << j << '\n';
            }
        }
    }
}