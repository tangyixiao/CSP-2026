#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[200005];
long long maxx=-1;
bool bo[200005];
void dfs(long long t,long long k,long long ans){
	if(k==m+1){
		maxx=max(maxx,ans);
		return;
	}
	for(long long i=t;i<=n;i++){
		if(ans==-1){
			dfs(i+1ll,k+1ll,a[i]);
		}else{
			dfs(i+1ll,k+1ll,ans&a[i]);
		}
		
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1ll,1ll,-1);
	cout<<maxx;
	return 0;
}
