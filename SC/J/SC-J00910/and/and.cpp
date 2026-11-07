#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<ll> a;
ll  vis[(ll)2e5+5];
ll mx=0;
ll n,m;
void dfs(ll x,ll cnt,ll sum){
	if(cnt==m){
		mx=max(mx,sum);
		
	}
	for(ll i=x+1;i<=n;i++){
		if(vis[i]==0){
			vis[i]==1;
//			cout<<x<<' '<<(sum&a[i])<<' '<<sum<<' '<<a[i]<<endl;
			dfs(i,cnt+1,(sum&a[i]));
			
		}else{
			continue;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	vector<ll> s(n+1);
	s[0]=1;
	cin>>n>>m;
	a.resize(n+1);
	ll maxx=0,lo;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
		s[i]=s[i-1]&a[i];
		if(i==1) lo=a[i];
		else lo=(lo&a[i]);
	}
	if(m==1){
		cout<<maxx;
		return 0;
	}
	if(n==m){
		cout<<lo;
		return 0;
	}
	ll mo=1;
	ll an=0;
	if(m==n-1){
		for(ll i=1;i<=n;i++){
			ll mo=s[i-1];
			for(ll j=i+1;j<=n;j++){
				mo=(mo&a[j]);
			}
//			cout<<mo<<endl;
			an=max(mo,an);	
		}
		cout<<an;
		return 0;
	}
	for(ll i=1;i<=n-m+1;i++){
		dfs(i,1,a[i]);
		memset(vis,0,200005);
	}
	cout<<mx;
	return 0;
}

//45