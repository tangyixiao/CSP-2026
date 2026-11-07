#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000005],vis[1000005],maxn;
void dfs(int step,int c){
	if(step > n || c == m){
		int cnt = 0,ans = 0;
		for(int i = 1;i <= n;i++){
			if(vis[i] == 1){
				if(cnt == 0)
				    ans = a[i];
			    else
			    	ans = (ans & a[i]);
			    cnt++;
			}
		}
		if(cnt == m){
			maxn = max(maxn,ans);
		}
		return;
	}
	for(int i = 0;i <= 1;i++){
		vis[step] = i;
		dfs(step+1,c+i);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	dfs(1,0);
	cout << maxn;
}
