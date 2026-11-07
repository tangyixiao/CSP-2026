#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int n,m,a[N],ans;
void dfs(int k,int cnt,int sum){
	if (k == n + 1){
		if (cnt == m) ans = max(ans,sum);
		return ;
	}
	if (cnt > m)return;
	dfs(k + 1,cnt + 1,sum & a[k]);
	dfs(k + 1,cnt,sum);
}
signed main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin >> n >> m;
    for (int i = 1; i <= n;i++) cin >> a[i];
    int tmp = pow(2,30) - 1;
    dfs(1,0,tmp);
    cout << ans;
    return 0;
}



