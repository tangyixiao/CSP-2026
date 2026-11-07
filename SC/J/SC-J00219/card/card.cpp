#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,k,q;
ll a[500005],w[500005],cnt,z[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		for(ll j=1;j<=cnt;j++){
			if(w[j]==a[i]){
				k=1;
				q=j;
				break;
			}
		}
		if(k==1){
			for(ll u=q;u<=cnt;u++)
				w[u]=0;
		}
		w[++cnt]=a[i];
		for(ll y=1;y<=cnt;y++){
			z[w[y]]=i;
		}
	}
	for(ll i=1;i<=m;i++){
		cout<<z[i]<<' ';
	}
	return 0;
}
