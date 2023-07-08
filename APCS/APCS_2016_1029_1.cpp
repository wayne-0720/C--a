#include <bits/stdc++.h>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if (s2 * s2 + s3 * s3 == s1 * s1)
    {
        cout << "right" << endl;
    }
    else if (s2 * s2 + s3 * s3 > s1 * s1)
    {
        cout << "Acute" << endl;
    }
    else
    {
        cout << "Obtuse" << endl;
    }
}