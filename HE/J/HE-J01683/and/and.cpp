#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10;
int n,m;
int b[N][40];
int ans;
int vis[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false); cin.tie(nullptr); 
    cin >> n >> m;
    for (int i=1;i<=n;i++) {
        int x; cin >> x;
        for (int j=0;j<40;j++){
            b[i][j] = x % 2;
            x /= 2;
        }
    }
    for (int j=39;j>=0;j--){
        int cnt = 0;
        for (int i=1;i<=n;i++){
            if (!vis[i] && b[i][j]) cnt ++;
        }
        if (cnt >= m){
            for (int i=1;i<=n;i++) {
                if (!b[i][j]) vis[i] = 1;
            }
        	ans += (1ll << j);
        }
    }
    cout << ans;
    return 0;
}
