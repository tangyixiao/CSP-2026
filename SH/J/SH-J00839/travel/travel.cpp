#include <bits/stdc++.h>
using namespace std;

int c1, l1, c2, l2, a1, a2;
char s1, s2;

int main() {
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    scanf("%d %d%c %d %d%c", &c1, &l1, &s1, &c2, &l2, &s2);
    int ans[4] = {};
    if (c1 == c2)
        ans[0] = 1;
    if (l1 == l2)
        ans[1] = ans[0] && 1;
    a1 = (s1 <= 'C') ? 1 : 2;
    a2 = (s2 <= 'C') ? 1 : 2;
    if (a1 == a2)
        ans[2] = ans[1] && 1;
    if (abs(s1 - s2) == 1) ans[3] = ans[2] && 1;
    printf("%d%d%d%d", ans[0], ans[1], ans[2], ans[3]);
    return 0;
}
