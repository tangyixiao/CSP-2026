#include<bits/stdc++.h>
using namespace std;
#define int long long

int n, m, a[200010], ans = -1;

void dfs(int s, int k, int x){
	if(x <= ans || a[s] <= ans)
		return ;
	if(k == m){
		ans = max(ans, x);
		return ;
	}
	if(s > n)
		return ;
	dfs(s + 1, k + 1, x & a[s]);
	dfs(s + 1, k, x);
}

signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> n >> m;
	for(int i = 1; i <= n; ++ i)
		cin >> a[i];
	sort(a + 1, a + n + 1, [](int x, int y){
		return x > y;
	});
	dfs(1, 0, pow(2, 31) - 1);
	cout << ans;
}

