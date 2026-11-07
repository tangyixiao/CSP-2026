#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int n, m, a[200005];
bool vis[200005];
long long ans, maxn = 0;
void dfs(int step, int y,long long ans){
	if(y > m) return ;
	if(step ==  n + 1 && y <= m){
		if(y == m) maxn = max(ans, maxn);
		return ;
	}
	vis[step] = true;
	dfs(step + 1, y + 1, ans & a[step]);
	vis[step] = false;
	dfs(step + 1, y, ans);
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >>n >> m;
	ans = pow(2, 30) - 1;
	for(int i = 1;i <= n;i++) cin >> a[i];
	dfs(1, 0, ans);
	cout << maxn << endl;
	return 0;
}