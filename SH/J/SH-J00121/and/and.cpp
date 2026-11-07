#include<bits/stdc++.h>
using namespace std;
bool f[1048590],g[1048590],c[100];
int n,m,ans,a[1048590],maxn,sum=2097151;
inline void dfs(int i){
	if(i == n+1){
		int cnt=0,sum1=2097151;
		for(int j=1;j<i;j++) if(c[j]) {
			cnt++;
			sum1 &= a[j];
		}
		if(cnt == m) ans = max(ans,sum1);
		return;
	}
	c[i] = 0;
	dfs(i+1);
	c[i] = 1;
	dfs(i+1);
}
void solve1(){
	dfs(1);
	cout << ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		maxn = max(maxn,a[i]);
		sum = sum & a[i];
	}
	if(n <= 20){
		solve1();
	}
	else{
		if(n <= 2000){
			if(m == 1) cout << maxn;
			if(m == n) cout << sum;
			if(m == 2){
				for(int i=1;i<=n;i++){
					for(int j=1;j<=n;j++){
						if(i!=j)ans = max(ans,a[i]&a[j]);
					}
				}
				cout << ans;
			}
		}
	}
}
