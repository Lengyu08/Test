#include <bits/stdc++.h>

using namespace std;

const int N = 20, inf = 0x3f3f3f3f;
pair<int, int> a[1 << N];

pair<int, int> merge(auto x, auto y) {
    if (x.first < y.first) swap(x, y);
    pair<int, int> ans = x;
    if (y.first > ans.second) ans.second = y.first;
    return ans;
}

int main() {
#ifdef Online_Judge
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);
#endif
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 1 << n; i ++ ) {
        int x;
        scanf("%d", &x);
        a[i] = make_pair(x, -inf);
    }

    for (int j = 0; j < n ; j ++ ) {
        for (int i = 0; i < 1 << n; i ++ ) {
            if (i >> j & 1) a[i] = merge(a[i], a[i ^ (1 << j)]);
        }
    }

    int ans = 0;
    for (int i = 1; i < 1 << n; i ++ ) ans = max(ans, a[i].first + a[i].second);
    printf("%d", ans); 
    
    return 0;
}