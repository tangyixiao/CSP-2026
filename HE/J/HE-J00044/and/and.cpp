#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,ans=-100;
ll a[200100];
bool st[200100];
void dfs(ll cnt,ll sum){
	if(cnt==m){
		ans=max(sum,ans);
		return ;
	}
	for(ll i=1;i<=n;i++){
		if(!st[i]){
			st[i]=true;
			dfs(cnt+1,sum&a[i]);
			st[i]=false;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>a[i];
	if(n>20){
		sort(a+1,a+1+n,qwq);
		cout<<a[m];
		return 0;
	}
	memset(st,false,sizeof st);
	for(ll i=1;i<=n;i++){
		st[i]=true;
		dfs(1,a[i]);
		st[i]=false;
	}
	cout<<ans;
}

