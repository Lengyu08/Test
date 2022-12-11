#include <bits/stdc++.h>

using namespace std;

inline int randint(int l, int r) {
    r ++;
    l += (double)rand() * (r - l) / RAND_MAX;
    return l;
}

int main() {
    srand(time(0));
    int n = 3, m = 3, tt = randint(1, 10);
    printf("%d %d %d\n", n, m, tt);
    for (int i = 0; i < n; i ++ ) {
        for (int j = 0; j < m; j ++ ) {
            printf("%d ", randint(1, 10));
        }
        puts("");
    }
    return 0;
}