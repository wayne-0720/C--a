#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> a, b;

    int c;
    cin >> c;

    if ((c + 1) % 4 == 0)
    {
        a.push_back(1);
        a.push_back(2);
        b.push_back(3);
        cout << "YES\n";
        for (int i = 4; i <= c; i++)
        {
            if (i % 4 == 1)
            {
                a.push_back(i);
            }
            else if (i % 4 == 2)
            {
                a.push_back(i);
            }
            else
            {
                b.push_back(i);
            }
        }
        cout << a.size() << "\n";
        for (int t : a)
        {
            cout << t << " ";
        }
        cout << "\n";
        cout << b.size() << "\n";
        for (int t : b)
        {
            cout << t << " ";
        }
    }
    else if (c % 4 == 0)
    {
        cout << "YES\n";
        for (int i = 1; i <= c; i++)
        {
            if (i % 4 == 1)
            {
                a.push_back(i);
            }
            else if (i % 4 == 0)
            {
                a.push_back(i);
            }
            else
            {
                b.push_back(i);
            }
        }
        cout << a.size() << "\n";
        for (int t : a)
        {
            cout << t << " ";
        }
        cout << "\n";
        cout << b.size() << "\n";
        for (int t : b)
        {
            cout << t << " ";
        }
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
