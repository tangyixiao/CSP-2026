#include <iostream>
using namespace std;

const int maxn = 2e5 + 5;

long long q[maxn];
long long a[maxn];
char m[maxn];

int main () {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    long long n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        char ch;
        cin >> a[i] >> ch;
        q[i] = q[i - 1] + a[i];
        m[i] = ch;
        if (a[i] == 0) {
            i--;
            n--;
        }
    }
    long long l = 0, r = q[n];
    long long ans = 0;
    bool flag = false;
    if (r & 1) {
        long long index = (r + 1) / 2;
        long long ti = 1;
        while (ti < n && index > q[ti]) ti++;
        a[ti]--;
        if (a[ti] == 0) {
            for (int i = ti; i <= n; i++) {
                q[i] = q[i + 1];
                m[i] = m[i + 1];
            }
        }
        else {
            for (int i = ti; i <= n; i++) {
                q[i]--;
                //m[i] = m[i + 1];
            }
        }
        flag = true;
        r--;
    }
    //for (int i = 1; i <= n; i++) {
    //    for (int j = 0; j < q[i] - q[i - 1]; j++) {
    //        cout << m[i];
    //    }
    //}
    //cout << endl;
    while (l < r) {
        //printf("l=%d, r=%d, ans=%d\n", l, r, ans);
        long long tl = 1, tr = n;
        while (tl < n && l < q[tl]) tl++;
        while (tr > 1 && r >= q[tr]) tr--;
        //cout << m[tl] << " " << m[tr] << endl;
        if (m[tl] != m[tr]) {
            ans += min(a[tl], a[tr]);
        }
        l += min(a[tl], a[tr]);
        r -= min(a[tl], a[tr]);
    }
    //printf("l=%d, r=%d, ans=%d\n", l, r, ans);
    cout << ans;
    //cout << endl << flag;
    return 0;
}
