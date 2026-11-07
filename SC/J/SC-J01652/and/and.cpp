#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, m, maxn=-1e18, a[200005];
void dfs(int i, int s, int k){
	if(i==n || k==m){
		maxn=max(maxn, s);
		return;
	}
	dfs(i+1, s, k);
	if(s==0){
		dfs(i+1, (a[i]&a[i+1]), k+1);
	}else{
		dfs(i+1, (s&a[i+1]), k+1);
	}
}

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	if(n==m){
		int sum=a[1];
		for(int i=2; i<=n; i++){
			sum&=a[i];
		}
		cout << sum;
		return 0;
	}
	dfs(1, 0, 0);
	cout << maxn;
	return 0;
}