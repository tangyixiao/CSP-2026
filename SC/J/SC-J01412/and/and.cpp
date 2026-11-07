#include<bits/stdc++.h>
using namespace std;
long long a[200005];
long long n,m;
long long ans=0;
long long dfs(long long x,long long y,long long z){
	if(x>m){
		ans=max(ans,z);
		return 0ll;
	}
	if(y>n){
		return 0ll;
	}
	for(long long i=y;i<=n;i++){
		long long t=z&a[i];
		dfs(x+1,i+1,t);
	}
	return 0ll;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1ll;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1ll);
	if(n<=20ll){
		for(long long i=1ll;i<=n;i++){
			dfs(2ll,i+1ll,a[i]);
		}
		cout<<ans;
	}
	else if(m==1ll){
		cout<<a[n];
	}
	else if(m==n){
		for(long long i=1ll;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
	}
	else if(m==2ll){
		for(long long i=1ll;i<n;i++){
			dfs(2ll,i+1ll,a[i]);
		}
		cout<<ans;
	}
	else{
		for(long long i=1ll;i<=n;i++){
			dfs(2ll,i+1ll,a[i]);
		}
		cout<<ans;
	}
	return 0;
}//打表过样例，希望不是0分。 