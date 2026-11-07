#include <bits/stdc++.h>
using namespace std;
const int M=200009;
int n,m;
long long a[M],ans=-1;
bool vis[M];
void dfs(int k,long long cnt,int j){
	if(k==0){
		ans=max(ans,cnt);
	}
	if(n-j+1<k){
		return;
	}
	for(int i=j;i<=n;i++)if(!vis[i]){
		vis[i]=1;
		if(cnt==-1)dfs(k-1,a[i],i+1);
		else dfs(k-1,cnt&a[i],i+1);
		vis[i]=0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	dfs(m,-1,1);
	cout << ans;
	return 0;
}