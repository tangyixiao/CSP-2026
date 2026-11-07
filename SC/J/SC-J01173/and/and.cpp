#include <cstdio>
const int N = 200005;
int n, m;
int a[N];
int main() {
    // xyy
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    int ans = 0;
    for(int i = 29; i >= 0; i--) {
        int tans = ans | (1 << i);
        int cnt = 0;
        for(int j = 1; j <= n; j++) {
            if((tans & a[j]) == tans) cnt++;
        }
        if(cnt >= m) {
            ans |= (1 << i);
        }
    }
    printf("%d\n", ans);
    fclose(stdin);
    fclose(stdout);
    return 0;
}