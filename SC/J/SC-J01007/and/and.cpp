#include<bits/stdc++.h>
using namespace std;
int n, m;
long long a[200005], t[200005];
long long ans = -1;
bool vis[200005];
void dfs(int s) {
	if (s == m) {
		long long y = t[1];
	//	cout<<t[1]<<" ";
		for (int i = 2; i <= m; i++) {
			y &= t[i];
			//cout<<t[i];
		}
	//	cout<<endl;
		ans=max(ans,y);
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (vis[i] == 0) {
			s++;
			t[s] = a[i];
			vis[i] = 1;
			dfs(s);
			vis[i] = 0;
			s--;
		}
	}

}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	dfs(0);
	cout << ans;
	return 0;
}