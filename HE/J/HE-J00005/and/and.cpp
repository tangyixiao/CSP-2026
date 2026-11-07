#include<bits/stdc++.h>
using namespace std;
int n,m,ans = -1;
const int MAXN = 200000+10;
int a[MAXN];
void dfs(int pos, int cnt, int sum){
	if(pos == n + 1){
		if(cnt == m){
			ans = max(ans,sum);
		}
		return;
	}
	if(cnt == m && sum <= ans) return;
	int tmp = a[pos] & sum;
	if(cnt < m){
		if(cnt == 0){
			dfs(pos+1,cnt+1,a[pos]);
		}else{
			dfs(pos+1,cnt+1,tmp);
		}
		dfs(pos+1,cnt,sum);
	}else{
		dfs(pos+1,cnt,sum);
	}
}
int main(){
	freopen("and.in", "r",stdin);
	freopen("and.out", "w",stdout);
	cin >> n >> m;
	int maxa = -1, ans1;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		maxa = max(a[i],maxa);
		if(i == 1){
			ans1 = a[i];
		}else{
			ans1 = a[i] & ans1;
		}
	}
	if(n <= 20){
		dfs(1,0,0);
		cout << ans;
		return 0;
	}else{
		if(m == 1){
			cout << maxa;
			return 0;
		}else if(m == n){
			cout << ans1;
			return 0;
		}else if(m = 2){
			for(int i = 1; i <= n; i++){
				for(int j = 1; j <= n; j++){
					if(i == j) continue;
					ans = max(ans,a[i] & a[j]);
				}
			}
			cout << ans;
			return 0;
		}else{
			dfs(1,0,0);
			cout << ans;
			return 0;
		}
	}
	
	return 0;
}
