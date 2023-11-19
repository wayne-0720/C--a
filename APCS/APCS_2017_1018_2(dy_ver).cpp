#include <iostream>
#include <vector>

using namespace std;

int main() {

    int k; cin >> k;
    string s; cin >> s;
    vector<string> v;

    string now;

    for(char c : s) {
        if(!now.empty() && isupper(c) != isupper(now.back())){
            v.push_back(now);
            now.clear();
        }
        now += c;
    }
    v.push_back(now);

    int ans = 0;
    int pg = 0;

    for (string sv : v) {
        if((pg != 0 && sv.size() == k) || (pg == 0 && sv.size() >= k)) pg++;
        else if(pg != 0 && sv.size() != k) {
            ans = max(ans, (pg + (sv.size() > k)) * k);
            pg = sv.size() > k;
        }
    }

    cout << max(ans, pg) << endl;

    return 0;
}