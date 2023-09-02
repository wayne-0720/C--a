#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    double f;
    cin >> f;
    f = (f - 32) * 5 / 9;
    cout << fixed << setprecision(3) << f << "\n";
    return 0;
}
