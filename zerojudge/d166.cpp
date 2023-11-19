#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    while (getline(cin, s))
    {
        if (s == "-1")
            break;
        stringstream ss(s);
        vector<int> v;
        int n;
        for (int i = 0; ss >> n; i++)
        {
            v.push_back(n);
        }
        vector<int> b(v.size(), 0);
        for (int i = 0; i < v.size(); i++)
        {
            int c = 0;
            for(int j=0;j<b.size();j++){
                if(b[j]==0){
                    c++;
                }
                if(c==v[i]+1){
                    b[j]=i+1;
                    break;
                }
            }
        }
        for (auto &it : b)
        {
            if (it == 0)
                break;
            else
                cout << it << " ";
        }
        cout << "\n";
    }
    return 0;
}
