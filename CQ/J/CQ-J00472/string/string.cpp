#include <bits/stdc++.h>
using namespace std;

int n;
pair<int, char> a[200001];

int main() {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d %c", &a[i].first, &a[i].second);
    long long ans = 0;
    int p = n;
    for (int i = 1; i <= n; i++) {
        while (p > i && a[p].first < a[i].first) {
            ans += (a[i].second != a[p].second) * a[p].first;
            a[i].first -= a[p--].first;
        }
        if (p <= i)
            break;
        ans += (a[i].second != a[p].second) * a[i].first;
        a[p].first -= a[i].first;
    }
    printf("%lld", ans);
}