#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main(){
    vector<int> ppl, apart;
    int n, m, k; cin >> n >> m >> k;
    for(int i = 0; i < n; i++) {
        int a; cin >> a; ppl.push_back(a);
    }
    for(int i = 0; i < m; i++) {
        int a; cin >> a; apart.push_back(a);
    }
 
    sort(ppl.begin(), ppl.end());
    sort(apart.begin(), apart.end());
 
    int ans = 0;
 
    while(!ppl.empty() && !apart.empty()) {
        if(apart.back() <= ppl.back() + k && apart.back() >= ppl.back() - k) {
            ans++;
            ppl.pop_back();
            apart.pop_back();
        } else if (ppl.back() - k >= apart.back())
            ppl.pop_back();
        else
            apart.pop_back();
    }
 
    cout << ans;
 
    return 0;
}