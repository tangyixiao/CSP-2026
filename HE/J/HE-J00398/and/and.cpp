#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long maxn;
long long a[200010];
void dfs(long long x,long long cnt,long long ans){
	if(cnt==m){
		maxn=max(maxn,ans);return;
	} 
	for(long long j=x;j<=n;j++){
		if(a[j]!=a[x]) dfs(j,cnt+1,ans&a[j]);
	} 
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n;cin>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		dfs(i,1,a[i]);
	}
	cout<<maxn;
	return 0;
}
