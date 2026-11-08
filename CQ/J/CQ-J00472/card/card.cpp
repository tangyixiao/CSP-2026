#include <bits/stdc++.h>
using namespace std;

int n, m, a[500001], b[500001], ans[300001];

int main() {
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    memset(b, -1, sizeof(b));
    for (int i = 1; i <= n; i++) {
        vector<int> v;
        for (int j = i; j <= n; j++) {
            if (b[a[j]] != -1) {
                int t = b[a[j]];
                while (v.size() > t) {
                    b[a[v.back()]] = -1;
                    v.pop_back();
                }
            }
            b[a[j]] = v.size();
            v.push_back(j);
        }
        for (auto j : v) {
            ans[a[j]]++;
            b[a[j]] = -1;
        }
    }
    for (int i = 1; i <= m; i++)
        printf("%d ", ans[i]);
    auto [_, __] = make_pair(1, 2);
}

/*
没救了，题读错了。
原来收了牌之后还要把牌放回去吗
有没有人能告诉我能不能用结构化绑定
*/