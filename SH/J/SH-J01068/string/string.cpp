#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[200005];
char c[200005];
ll cnt1[30], cnt2[30];
int main() {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    int n;
    cin >> n;
    ll len = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i] >> c[i];
        len += a[i];
    }
    if (len % 2 == 0){
        ll cnt = 0;
        for (int i = 1; i <= n; i++){
            cnt += a[i];
            if (cnt > len / 2){
                cnt1[c[i] - 'a' + 1] += len / 2 - cnt + a[i];
                break;
            }
            else
                cnt1[c[i] - 'a' + 1] += a[i];
        }
        cnt = 0;
        for (int i = 1; i <= n; i++){
            cnt += a[i];
            if (cnt >= len / 2 + 1){
                if (cnt - a[i] < len / 2 + 1)
                    cnt2[c[i] - 'a' + 1] += cnt - len / 2;
                else
                    cnt2[c[i] - 'a' + 1] += a[i];
            }
        }
        ll ans = 0;
        for (int i = 1; i <= 26; i++){
            ans += abs(cnt1[i] - cnt2[i]);
        }
        cout << ans / 2;
    }
    else{
        ll cnt = 0;
        for (int i = 1; i <= n; i++){
            cnt += a[i];
            if (cnt > len / 2){
                cnt1[c[i] - 'a' + 1] += len / 2 - cnt + a[i];
                break;
            }
            else
                cnt1[c[i] - 'a' + 1] += a[i];
        }
        cnt = 0;
        for (int i = 1; i <= n; i++){
            cnt += a[i];
            if (cnt >= len / 2 + 2){
                if (cnt - a[i] < len / 2 + 2)
                    cnt2[c[i] - 'a' + 1] += cnt - len / 2 - 1;
                else
                    cnt2[c[i] - 'a' + 1] += a[i];
            }
        }
        ll ans = 0;
        for (int i = 1; i <= 26; i++){
            ans += abs(cnt1[i] - cnt2[i]);
        }
        cout << ans / 2;
    }
    return 0;
}
