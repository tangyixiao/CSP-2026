#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int A=2e5+10;
ll n,m,k=-1,s,ans;
ll a[A],c[A],cs,y[A],ys;
ll v[100];
bool vis[100],b[A][50];
void er(ll x,ll w,ll i){
	ll p=1<<w;
	p=p&x;
	if(p){
		v[w]++;
		b[i][w]=1;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<=30;j++){
			er(a[i],j,i);
		}
	}
	for(int i=0;i<=30;i++){
		if(v[i]>=m){
			vis[i]=1;
			k=max(k,1LL*i);
		}
	}
	if(k==-1){
		cout<<0;
		return 0;
	}
	ans=1<<k;cs=0;
	for(int i=1;i<=n;i++){
		if(b[i][k]){
			c[++cs]=i;
		}
	}
	while(k--){
		if(vis[k]){
			if(cs>=m){
				memset(y,0,sizeof(y));ys=0;
				for(int i=1;i<=cs;i++){
					if(b[c[i]][k]){
						y[++ys]=c[i];
					}
				}
				if(ys>=m){
					s=1<<k;
					ans+=s;
					cs=ys;
					memset(c,0,sizeof(c));
					for(int i=1;i<=cs;i++){
						c[i]=y[i];
					}
				}
			}
		}
		if(cs<m)break;
	}
	cout<<ans;
	return 0;
}