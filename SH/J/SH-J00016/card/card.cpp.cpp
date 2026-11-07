#include <bits/stdc++.h>

using namespace std;

const int N = 500010;

bool st[N];
int n, m, a[N], pos[N], cards[N], sz, cnt[N];

int main() {
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);

    scanf("%d%d", &n, &m);
    bool A = true;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        if (i > 1 && a[i - 1] > a[i]) A = false;
    }

    if (A) {
        for (int i = 1; i <= n; ++i) ++cnt[a[i]];
        for (int i = 1; i <= m; ++i) cnt[i] += cnt[i - 1];
    } else {
        for (int i = 1; i <= n; ++i) {
            memset(st, 0, (m + 1) * sizeof(bool));
            for (int j = i; j <= n; ++j) {
                if (st[a[j]]) {
                    for (int k = pos[a[j]] + 1; k <= sz; ++k) {
                        st[cards[k]] = false;
                        pos[cards[k]] = 0;
                    }
                    sz = pos[a[j]];
                } else {
                    st[a[j]] = true;
                    pos[a[j]] = ++sz;
                    cards[sz] = a[j];
                }
            }
            for (int j = 1; j <= m; ++j) cnt[j] += st[j];
        }
    }

    for (int i = 1; i <= m; ++i) printf("%d%c", cnt[i], " \n"[i == m]);

    return 0;
}
// rp++ 
// jbw ORZ ORZ ORZ
