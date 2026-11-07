#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],ans=-1,maxn;
void dfs(long long x,long long sum,long long sx){
	if(x==m){
		ans=max(ans,sum);
		return;
	}
	for(int i=sx;i<=n;i++){
		if(x==0) dfs(1,a[i],i+1);
		else dfs(x+1,sum&a[i],i+1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	if(n<=2000){
		dfs(0,0,1);
		cout<<ans;
	}
	else cout<<maxn;
	return 0;
}