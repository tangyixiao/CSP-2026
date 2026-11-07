#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,aaa,a[200009],s[200009],f[200009];
inline void dfs(ll i,ll cnt,ll b){
	if(i==n+1){
		if(cnt!=m) return;
		aaa=max(aaa,b);
		return;
	}
	if(b==0) dfs(i+1,cnt+1,a[i]);
	else dfs(i+1,cnt+1,b&a[i]);
	dfs(i+1,cnt,b);
}
bool ok(ll x){
	ll cnt=1;
	while(1){
		if(cnt==x) return 1;
		if(cnt>x) return 0;
		cnt*=2;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	cin>>a[1];
	bool fl=1,flag=1;
	s[1]=a[1];
	if(!ok(a[1]+1)) fl=0;
	if(a[1]!=0) flag=0;
	for(ll i=2;i<=n;i++){
		cin>>a[i];
		s[i]=(s[i-1]&a[i]);
		if(!ok(a[i]+1)) fl=0;
		if(a[i]!=i-1) flag=0;
	}
	if(m==1){
		cout<<*max_element(a+1,a+n+1);
	}else if(m==n){
		cout<<s[n];
	}else if(m==2){
		ll ans=0;
		for(ll i=1;i<=n;i++)
			for(ll j=1;j<=n;j++)
				if(i!=j)
					ans=max(ans,a[i]&a[j]);
		cout<<ans;
	}else if(n<=20){
		dfs(1,0,0);
		cout<<aaa;
	}else if(*max_element(a+1,a+n+1)<4){
		int cc[4]={};
		for(ll i=1;i<=n;i++) cc[a[i]]++;
		if(cc[3]>=m) cout<<3;
		else if(cc[3]+cc[2]>=m) cout<<2;
		else if(cc[3]+cc[1]>=m) cout<<1;
		else cout<<0;
	}else if(fl){
		sort(a+1,a+n+1,greater<ll>());
		cout<<a[m];
	}else if(ok(n)&&flag){
		sort(a+1,a+n+1,greater<ll>());
		ll ans=a[1];
		for(ll i=2;i<=m;i++) ans&=a[i];
		cout<<ans;
	}
	return 0;
}
