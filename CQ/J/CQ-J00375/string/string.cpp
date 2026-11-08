/*
~~区间 DP~~

贪心，以中点为界，如果左边和它在右边对应的字母不一样，则记录

严重怀疑大样例过水
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// int cnt;
int n, a[200001];
char c[200001];
long long mid, sum[200001], s, e, l, r, ans; // sum[i] 记录前 i 段的最后一个下标（1-based）
int main() {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> c[i];
        sum[i] = sum[i-1] + a[i];
    }
    mid = lower_bound(sum + 1, sum + n + 1, (sum[n] + 1) / 2) - sum;
    for (int i = 1; i <= mid; i++) {
        s = sum[i-1] + 1;
        e = sum[i];
        l = lower_bound(sum + mid, sum + n + 1, sum[n] - s + 1) - sum;
        r = lower_bound(sum + mid, sum + n + 1, sum[n] - e + 1) - sum;
        for (int j = r; j <= l; j++) 
            if (c[j] != c[i]) {
                if (j == r) ans += min(sum[j], sum[n] - s + 1) - sum[n] + e;
                else if (j == l) ans += sum[n] - s + 1 - max(sum[j-1] + 1, sum[n] - e + 1) + 1;
                else ans += a[j];
            }
    }
    cout << ans;
    return 0;
    // string s;
    // cin >> s;
    // for (unsigned int i = 0, j = 1; i < s.length() && j <= s.length() / 2; i++, j++) 
    //     if (s[i] != s[s.length()-i-1]) 
    //         cnt++;
    // cout << cnt;
    return 0;
}