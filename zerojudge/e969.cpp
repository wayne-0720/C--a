#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int m, t, st = 0;
    bool e;
    cin >> m >> t >> e;
    while (true)
    {
        if (e)
        {
            m -= 55;
            if (m < 0 && st == 0)
            {
                cout << "Wayne can't eat and drink.\n";
                break;
            }
            else if (m < 0)
            {
                break;
            }
            else if (m == 0)
            {
                cout << st << ": Wayne drinks a Corn soup, and now he doesn't have money.\n";
            }
            else
            {
                if (m == 1)
                {
                    cout << st << ": Wayne drinks a Corn soup, and now he has " << m << " dollar.\n";
                }
                else
                {
                    cout << st << ": Wayne drinks a Corn soup, and now he has " << m << " dollars.\n";
                }
            }
            st += t;
            e = false;
        }
        else
        {
            m -= 32;
            if (m < 0 && st == 0)
            {
                cout << "Wayne can't eat and drink.\n";
                break;
            }
            else if (m < 0)
            {
                break;
            }
            else if (m == 0)
            {
                cout << st << ": Wayne eats an Apple pie, and now he doesn't have money.\n";
            }
            else
            {

                if (m == 1)
                {
                    cout << st << ": Wayne eats an Apple pie, and now he has " << m << " dollar.\n";
                }
                else
                {
                    cout << st << ": Wayne eats an Apple pie, and now he has " << m << " dollars.\n";
                }
            }
            st += t;
            e = true;
        }
    }
    return 0;
}
