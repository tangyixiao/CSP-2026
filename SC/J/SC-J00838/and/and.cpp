#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005];
map<int,map<int,map<int,int > > > dp,v;
int dfs(int d,int x,int c){
	if (c==0) return x;
	if (d>n) return -1ll;
	if (v[d][x][c]!=0) return dp[d][x][c];
	int re=0;
	if (c==m) re=max(dfs(d+1,x,c),dfs(d+1,a[d],c-1));
	else re=max(dfs(d+1,x,c),dfs(d+1,(x&a[d]),c-1));
	dp[d][x][c]=re;
	v[d][x][c]=1;
	return dp[d][x][c];
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	if (n<=20){
		cout << dfs(1,0,m);
		return 0;
	}
	if (m==1){
		int maxx=0;
		for (int i = 1;i <= n;i++){
			maxx=max(maxx,a[i]);
		}
		cout << maxx;
		return 0;
	}
	if (m==n){
		int ans=a[1];
		for (int i = 2;i <= n;i++){
			ans=(ans&a[i]);
		}
		cout << ans;
		return 0;
	}
	if (m==2){
		int maxx=0;
		for (int i = 1;i <= n;i++){
			for (int j = 1;j <= n;j++){
//				cout << i << " " << j << " " << (a[i]&a[j]) << '\n';
				if (i!=j) maxx=max(maxx,(a[i]&a[j]));
			}
		}
		cout << maxx;
		return 0;
	}
	if (m==n-1){
		int maxx=0;
		for (int i = 1;i <= n;i++){
			int x;
			if (i!=1) x=a[1];
			else x=a[2];
			for (int j = 1;j <= n;j++){
				if (j==i) continue;
				x=(x&a[j]);
			}
			maxx=max(maxx,x);
		}
		cout << maxx;
		return 0;
	}
	cout << dfs(1,0,m);
	return 0;
}
//4 2
//3 15 12 12

//5 3
//31 3 1 15 7

//21 2
//2 2 2 2 2 2 2 2 2 16 2 2 2 2 2 8 2 2 2 2