#include <bits/stdc++.h>
using namespace std;
long long m,n,a[200010],box[200010],vis[200010];
long long maxn=-1e9;
void dfs(int x,int t){
	if(x==m+1){
		long long sum=box[1];
		for(int i=2;i<=m;i++){
			sum&=box[i];
		}
		maxn=max(sum,maxn);
	}
	for(int i=t;i<=n;i++){
		if(vis[i]==0){
			box[x]=a[i];
			vis[i]=1;
			dfs(x+1,i+1);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
 	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	dfs(1,1);
	cout << maxn;
	return 0;
}
