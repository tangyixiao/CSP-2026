#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 1e5 + 10;
int n,m;
LL a[N];
LL maxn,now,ans = -1,minn;
bool vis[N];
void dfs(int step,LL now){
	if(step == m){ans = max(ans,now);return;}
	for(int i = 1;i <= n;i ++){
		if(vis[i])continue;
		vis[i] = 1;
		if(step == 0)dfs(step + 1,a[i]);
		else dfs(step + 1,now & a[i]);
		vis[i] = 0;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	cin >> a[1];
	now = a[1],maxn = a[1],minn = a[1];
	for(int i = 2;i <= n;i ++){
		cin >> a[i];
		now = now & a[i];
		maxn = max(maxn,a[i]);
		minn = min(minn,a[i]);
	}
	if(m == 1){cout << maxn;return 0;}
	if(m == n){cout << now;return 0;}
	if(m == 2){for(int i = 1;i <= n;i ++){
		for(int j = 1;j <= n;j ++){
			if(i == j)continue;
			ans = max(ans,a[i]&a[j]);
		}
	}cout << ans << endl;return 0;}
	if(n <= 20){
		dfs(0,-1);
		cout << ans;
		return 0;
	}
	int cnt = 1;
	ans = a[n];
	for(int i = n - 1;i >= 1;i --){
		ans &= a[i];
		cnt ++;
		if(cnt == m)break;
	}
	cout << ans;
//	if(m == n - 1){for(int i = 1;i <= n;i ++){
//	if(a[i] == minn)continue;
//	if(ans == -1)ans = a[i];
//	else ans &= a[i];	
//	}cout << ans << endl;return 0;}
	return 0;
}

