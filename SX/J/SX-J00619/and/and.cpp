#include<bits/stdc++.h>
using namespace std;
int n, m, ans = -1;
int a[100010];
void dfs(int num, int sum, int cnt){
	if(num == m){
		ans = max(ans, cnt);
		return;
	}
	for(int i = sum + 1;i <= n;i++){
		dfs(num+1, i, cnt & a[i]);
	}
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n-m+1;i++){
		dfs(1, i, a[i]);
	}
	cout << ans;
	return 0;
}