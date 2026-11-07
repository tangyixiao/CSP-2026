#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[500005];
bool b[200005];
ll cnt[300005];
ll ans[2000005];
int main() {
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    bool fg1 = true;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        if (a[i] < a[i - 1])
            fg1 = false;
    }
    if (fg1){
        for (int i = 1; i <= n; i++){
            ans[a[i]] += i;
        }
        for (int i = 1; i <= n; i++){
            cout << ans[i] << ' ';
        }
    }
    else{
        for (int i = 1; i <= n; i++){
            memset(cnt, 0, sizeof cnt);
            memset(b, true, sizeof b);
            for (int j = i; j <= n; j++){
                cnt[a[j]]++;
                if (cnt[a[j]] >= 2){
                    for (int k = j - 1; k >= 1; k--){
                        if (b[k] == false)
                        continue;
                        b[k] = false;
                        cnt[a[k]]--;
                        if (a[k] == a[j])
                        break;
                    }
                }
            }
            for (int i = 1; i <= m; i++){
                if (cnt[i] >= 1)
                    ans[i]++;
            }
        }
        for (int i = 1; i <= m; i++){
            cout << ans[i] << ' ';
        }
    }
    return 0;
}
