#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cin >> a;
    a = a / 12 * 50 + a % 12 * 5;
    cout << a << endl;
    return 0;
}
