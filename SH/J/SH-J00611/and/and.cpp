#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],maxn,f,ans,b[200005],mmaxn;
bool issame=1;
void dfs(int now,int c,int sum){
	if(c == m){
		mmaxn = max(mmaxn,sum);
		return;
	}
	if(now == n+1) return;
	if(c == 0){
		dfs(now+1,c+1,a[now]);
	}else{
		dfs(now+1,c+1,sum&a[now]);
	}
	dfs(now+1,c,sum);
	return;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	cin >> a[1];
	f=a[1];
	ans = a[1];
	for(int i = 2;i <= n;i++){
		cin >> a[i];
		issame = issame && a[i]==f;
		maxn = max(maxn,a[i]);
		ans = ans & a[i];
	}
	if(m == 1){
		cout << maxn;
		return 0;
	}
	if(m == n){
		cout << ans;
		return 0;
	}
	if(m == 2){
		int aans=0;
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= n;j++){
				if(i == j) continue;
				int now = a[i]&a[j];
				aans = max(aans,now);
			}
		}
		cout << aans;
		return 0;
	}
	if(issame){
		cout << ans;
		return 0;
	}
	if(n <= 20){
		dfs(1,0,0);
		cout << mmaxn;
	}
	return 0;
}
