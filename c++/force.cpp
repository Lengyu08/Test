#include <bits/stdc++.h>

using namespace std;

const int N = 510;
long long s[N][N];

int main() {
    int n, m;
    long long tt;
    scanf("%d%d%lld", &n, &m, &tt);
    for (int i = 1; i <= n; i ++ ) {
        for (int j = 1; j <= m; j ++ ) {
            scanf("%lld", &s[i][j]);
            s[i][j] = s[i][j] + s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
        }
    }
    long long res = 0;
    for (int x1 = 1; x1 <= n; x1 ++ ) {
        for (int y1 = 1; y1 <= m; y1 ++ ) {
            for (int x2 = x1; x2 <= n; x2 ++ ) {
                for (int y2 = y1; y2 <= m; y2 ++ ) {
                    long long sum = s[x2][y2] - s[x2][y1 - 1] - s[x1 - 1][y2] + s[x1 - 1][y1 - 1];
                    if (sum <= tt) {
                        res ++;
                    }
                }
            }
        }
    }
    printf("%lld", res);
    return 0;
}