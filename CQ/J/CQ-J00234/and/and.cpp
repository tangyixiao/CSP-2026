#include<bits/stdc++.h>

using namespace std;
int n,m,ans = -1e9;
int a[200005];
bool vis[200005];
void dfs(int pos,int sum) {
	if(pos == m + 1) {
		ans = max(ans,sum);
		return ;
	}
	//cout << sum;
	for(int i = 1;i <= n; i++) {
		if(!vis[i]) {
			vis[i] = 1;
			if(pos == 1) dfs(pos + 1,a[i]);
			else dfs(pos + 1,sum & a[i]);
			vis[i] = 0;
		}
	}
}
bool cmp(int x,int y) {
	return x > y;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	if(m == 0) {
		cout << 0;
		return 0;
	}
	cin >> a[1];
	for(int i = 2;i <= n; i++) {
		cin >> a[i];
	}
	if(n <= 20) {
		dfs(1,1);
		cout << ans;
	}
	else {
		sort(a + 1,a + 1 + n,cmp);
		int cnt = a[1];
		for(int i = 2;i <= m; i++) cnt = cnt & a[i]; 
		cout << cnt;
	}
	return 0;
}
