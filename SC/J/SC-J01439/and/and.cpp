#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long a[N],n,m;
	long long ans=0;
void dfs(long long p,long long t,long long mmax,long long x){
	if(t==m){
		ans=max(ans,mmax);
		return ;
	}
	for(int i=x;i<=n;i++){
		if(x!=i){
			long long c=p&a[i];
			dfs(a[i],t+1,c,i);
		}
	}
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}

	for(int i=1;i<=n;i++){
		dfs(a[i],1,0,i);
	}
	cout<<ans;
}