#include <bits/stdc++.h>
using namespace std;
long long a[100010];
long long ans[10010][10010];
int dfs(int x,int y){
	if(ans[x][y]) return ans[x][y];
	if(y==2){
		int maxn=a[1]&a[2];
		for(int i=1;i<=x;i++){
			for(int j=1;j<i;j++)
				if(a[i]&a[j]>maxn)
					maxn=a[i]&a[j];
		}
		ans[x][y]=maxn;
		return maxn;
	}
	if(y==1){
		int maxn=a[1];
		for(int i=2;i<=x;i++){
			if(a[i]>=maxn)
				maxn=a[i];
		}
		ans[x][y]=maxn;
		return maxn;
	}
	int maxn=0;
	for(int i=1;i<=x;i++){
		int t=dfs(i,y-1);
		if(t&i>maxn){
			maxn=t;
		}
	}
	ans[x][y]=maxn;
	return maxn;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(n,m);
	cout<<ans[n][m];
	return 0;
}

