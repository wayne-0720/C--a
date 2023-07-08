#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
 
typedef std::pair<int, int> pair;
 
int main()
{
    std::vector<pair> v = { { 1, 2 }, { 6, 4 }, { 3, 4 }, { 4, 1 } };
 
    std::sort(v.begin(), v.end(),
            [](const pair &x, const pair &y) {
                //比較第二個值
                if (x.second != y.second) {
                    return x.second > y.second;
                }
 
                // 只有當第二個值相等時才比較第一個
                return x.first < y.first;
            });
 
    for (const pair &p: v) {
        std::cout << '{' << p.first << ',' << p.second << '}' << std::endl;
    }
 
    return 0;
}
