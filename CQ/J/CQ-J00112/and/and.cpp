#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,a[200005],s=0;
bool vis[200005];
ll yz[200005],yf[200005],e[30];
void dfs(ll x,ll g){
	if(g==m){
		s=max(x,s);
	}
	for(ll i=1;i<=n;i++){
		if(vis[i]==0){
			vis[i]=1;
			dfs(x&a[i],g+1);
			vis[i]=0;
		}
	}
}
bool cmp(ll x,ll y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+1+n);
		cout<<a[n];
		return 0;
	}
	if(m==n){
		int w=a[1];
		for(int i=2;i<=n;i++){
			w=w&a[i];
		}
		cout<<w;
		return 0;
	}
	if(m==n-1){
		yz[1]=a[1];
		yf[n]=a[n];
		for(ll i=2;i<=n;i++)yz[i]=yz[i-1]&a[i];
		for(ll i=n-1;i>=1;i--)yf[i]=yf[i+1]&a[i];
		s=max(s,max(yf[2],yz[n-1]));
		for(int i=2;i<n;i++){
			s=max(s,yz[i-1]&yf[i+1]);
		}
		cout<<s;
		return 0;
	}
	bool f=1;
	e[1]=2;
	for(ll i=2;i<=30;i++){
		e[i]=e[i-1]*2;
	}
	for(ll i=1;i<=n;i++){
		bool p=1;
		for(ll j=1;j<=20;j++){
			if(a[i]==e[j]-1){
				p=0;
			}
		}
		if(p)f=0;
	}
	if(f){
		sort(a+1,a+1+n,cmp);
		cout<<a[m];
		return 0;
	}
	
	for(ll i=1;i<=n;i++){
		vis[i]=1;
		dfs(a[i],1);
		vis[i]=0;
	}
	cout<<s;
	return 0;
}
