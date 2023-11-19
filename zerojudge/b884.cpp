#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        double x, y;
        cin >> x >> y;
        double r = sqrt(x + y);
        double yee = 100 - (r * r);
        if (yee > 0 && yee <= 30)
        {
            cout << "sad!\n";
        }
        else if (yee > 30 && yee <= 60)
        {
            cout << "hmm~~\n";
        }
        else if (yee > 60 && yee < 100)
        {
            cout << "Happyyummy\n";
        }
        else
        {
            cout << "evil!!\n";
        }
    }
    return 0;
}
