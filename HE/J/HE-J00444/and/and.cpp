#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N=2e5+100;
ll n,m,a[N],x[43],y[N][43],maxx=-1,ans=-1,vis[30],k,tot=0,S=0,one,two,three,A=0,B=0;
ll lo[40];

void dfs(ll now,ll sum,ll p){
	if(now==m){
		ans=max(ans,sum);
		return;
	}
	for(ll i=p+1;i<=n;i++){
		if(vis[i]==0){
			vis[i]=1;
			dfs(now+1,sum&a[i],i);
			vis[i]=0;
		}
	}
	return;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	std::cin.tie(nullptr)->std::ios::sync_with_stdio(false);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>=4){
			S=1;
		}
		if(a[i]!=i-1){
			B=1;
		}
	}
	for(ll i=1;i<=n;i++){
		maxx=max(maxx,a[i]);
		k=a[i];
		for(ll j=1;a[i];j++){
			if(a[i]&1){
				y[i][j]=1;
				x[j]++;
			}
			else{
				A=1;
				y[i][j]=0;
			}
			a[i]=a[i]/2;
			tot=max(tot,j);
		}
		a[i]=k;
	}
	sort(a+1,a+1+n);
	if(m==1){
		cout<<maxx<<'\n';
		return 0;
	}
	maxx=-1;
	if(m==n){
		ans=a[1];
		for(ll i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans<<'\n';
		return 0;
	}
	if(m==2){
		for(ll i=1;i<=n-1;i++){
			for(ll j=i+1;j<=n;j++){
				ans=a[i]&a[j];
				maxx=max(maxx,ans);
			}
		}
		cout<<maxx<<'\n';
		return 0;
	}
	if(n<=20){
		for(ll i=1;i<=n;i++){
			vis[i]=1;
			dfs(1,a[i],i);
			vis[i]=0;
		}
		cout<<ans<<'\n';
		return 0;
	}
	if(S==0){
		for(ll i=1;i<=n;i++){
			if(a[i]==1){
				one++;
			}
			if(a[i]==2){
				two++;
			}
			if(a[i]==3){
				three++;
			}
		}
		if(three>=m){
			cout<<3<<'\n';
			return 0;
		}
		if(three+two>=m){
			cout<<2<<'\n';
			return 0;
		}
		if(three+one>=m){
			cout<<1<<'\n';
			return 0;
		}
		cout<<0<<'\n';
		return 0;
	}
	if(A==0){
		ans=a[n-m+1];
		cout<<ans<<'\n';
		return 0;
	}
	if(B==0){
		ans=1;
		if(m>n/2){
			cout<<0<<'\n';
			return 0;
		}
		else if(m==n/2){
			for(ll i=1;i<=tot-1;i++){
				ans=ans*2;
			}
			cout<<ans<<'\n';
			return 0;
		}
		else{
			lo[0]=1;
			for(ll i=1;i<=tot-1;i++){
				lo[i]=lo[i-1]*2;
				ans=ans+lo[i];
			}
			for(ll i=1;i<=n;i=i*2){
				if(m<=i){
					cout<<ans<<'\n';
					return 0;
				}
				ans=ans-i;
			}
		}
	}
	return 0;
}
