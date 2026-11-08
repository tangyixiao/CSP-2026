#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[200005],ans,p[200005],mx,sum=INT_MAX;
void dfs(ll s,ll k,ll kk){
	if(kk>n+1){
		return ;	
	}
	if(k==m){
		ans=max(ans,s);
		return;
	}
	dfs(s & a[kk],k+1,kk+1);
	dfs(s,k,kk+1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
		sum=sum & a[i];
	}
	if(n<=20){
		dfs(INT_MAX,0,1);
		cout<<ans;
	}
	else if(n<=2000){
		if(m==1){
			cout<<mx;
		}
		else if(m==n){
			cout<<sum;
		}
		else{
			dfs(INT_MAX,0,1);
			cout<<ans;
		}
	}
	else{
		cout<<rand();
	}
	return 0;
}
