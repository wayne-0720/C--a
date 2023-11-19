#include<bits/stdc++.h>

using namespace std;

int main() {
    queue<int> q;

    int n, x; cin >> n >> x;
    int ans = 0;
    int current_sum = 0;
    while(n--) {
        int a; cin >> a;
        q.push(a);
        current_sum += a;

        while(current_sum >= x) {
            if(current_sum == x) ans++;
            current_sum -= q.front();
            q.pop();
        }
    }
    cout << ans << endl;
}