#include <iostream>
#include <cstring>
using namespace std;

using LL = long long;

const LL N = 2e5 + 10;
const LL M = 40;
LL s[M];
bool a[N][M];

int main() {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    LL n, m;
    cin >> n >> m;
    const LL k = 30;
    memset(s, 0, sizeof(s));
    for (LL i = 1; i <= n; i++) {
        LL x;
        cin >> x;
        for (LL j = 0; j <= k; j++) {
            a[i][j] = x % 2; x /= 2;
            s[j] += a[i][j];
        }
    }
    LL sum = 0;
    for (LL j = k; j >= 0; j--) {
        if (s[j] < m) {
            continue;
        }
        sum += (1 << j);
        for (LL i = 1; i <= n; i++) {
            if (!a[i][j]) {
                for (LL j2 = 0; j2 <= k; j2++) {
                    s[j2] -= a[i][j2];
                    a[i][j2] = 0;
                    s[j2] += a[i][j2];
                }
            }
        }
    }
    cout << sum << endl;

    fclose(stdin);
    fclose(stdout);
    return 0;
}
