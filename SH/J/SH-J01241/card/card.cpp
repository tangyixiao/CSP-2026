#include <bits/stdc++.h>
using namespace std;
int n,m,a[500010],cnt[300010],x[300010],anscnt[300010];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        cnt[a[i]]++,x[a[i]] = i;
    }
    for (int i = 1; i <= n; i++,cnt[a[i - 1]]--){
        for (int j = i; j <= n; j++){
            if (cnt[a[j]] > 1) j = x[a[j]];
            anscnt[a[j]]++;
        }
    }
    for (int i = 1; i <= m; i++){
        cout << anscnt[i] << ' ';
    }
    return 0;
}
