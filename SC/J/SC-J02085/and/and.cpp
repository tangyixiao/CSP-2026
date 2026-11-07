#include<bits/stdc++.h>
using namespace std;
int n, m, a[200005], ans;
void dfs(int x, int cnt, int now){
	if(now <= ans) return;
	if(cnt == m) {ans = now;return;}
	if(x + m - cnt - 1 > n) return;
	dfs(x + 1, cnt + 1, now & a[x]);
	dfs(x + 1, cnt, now);
}
bool cmp(int x, int y){
	return x > y;
} 
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n, cmp);
	for(int i = 1; i <= n - m + 1; i++){
		dfs(i, 0, a[i]);
	} 
	cout << ans; 
	return 0;
}