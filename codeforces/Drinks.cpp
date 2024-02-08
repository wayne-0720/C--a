#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    double a, b = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        double tmp;
        cin >> tmp;
        b += tmp;
    }
    cout << b / a << "\n";
    return 0;
}
