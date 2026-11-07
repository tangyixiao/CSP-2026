#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int N = 200010;

struct Str {
    int cnt;
    char ch;
};

LL len;
char ch[N];
Str str1[N], str2[N];
int n, a[N], sz1, sz2;

int main() {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);

    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d %c", &a[i], &ch[i]);
        len += a[i];
    }

    LL half = len / 2;
    LL cnt = 0LL;
    for (int i = 1; i <= n; ++i) {
        if (cnt < half && half < cnt + a[i]) {
            str1[i] = { half - cnt, ch[i] };
            sz1 = i;
            break;
        }
        str1[i] = { a[i], ch[i] };
        cnt += a[i];
        if (cnt == half) {
            sz1 = i;
            break;
        }
    }
    cnt = 0LL;
    for (int i = n; i >= 1; --i) {
        if (cnt < half && half < cnt + a[i]) {
            str2[n - i + 1] = { half - cnt, ch[i] };
            sz2 = n - i + 1;
            break;
        }
        str2[n - i + 1] = { a[i], ch[i] };
        cnt += a[i];
        if (cnt == half) {
            sz2 = n - i + 1;
            break;
        }
    }

    // puts("str1:");
    // cout << sz1 << endl;
    // for (int i = 1; i <= sz1; ++i) cout << str1[i].cnt << ' ' << str1[i].ch << endl;
    // puts("str2:");
    // cout << sz2 << endl;
    // for (int i = 1; i <= sz2; ++i) cout << str2[i].cnt << ' ' << str2[i].ch << endl;
    
    LL ans = 0LL;
    for (int i = 1, j = 1; i <= sz1 && j <= sz2;) {
        if (str1[i].cnt < str2[j].cnt) {
            ans += (str1[i].ch != str2[j].ch) * str1[i].cnt;
            str2[j].cnt -= str1[i].cnt;
            // cout << i << ' ' << j << " a " << ans << endl;
            ++i;
        } else if (str1[i].cnt == str2[j].cnt) {
            ans += (str1[i].ch != str2[j].ch) * str1[i].cnt;
            // cout << i << ' ' << j << " b " << ans << endl;
            ++i, ++j;
        } else {
            ans += (str1[i].ch != str2[j].ch) * str2[j].cnt;
            str1[i].cnt -= str2[j].cnt;
            // cout << i << ' ' << j << " c " << ans << endl;
            ++j;
        }
    }

    printf("%lld\n", ans);

    return 0;
}
// rp++ 
// jbw ORZ ORZ ORZ
