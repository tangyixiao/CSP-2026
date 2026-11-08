#include<bits/stdc++.h>
using namespace std;

long long n,m,a[1000001],xz,vis[1000001];
long long maxx=-999999,bhg,bhj;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]&a[j]>maxx){
				maxx=a[i]&a[j];
				bhg=i;
				bhj=j;
			}
		}
	}
	xz=maxx;
	vis[bhg]=1;
	vis[bhj]=1;
	for(int i=3;i<=m;i++){
		int hm=0,dx=-999;
		for(int j=1;j<=n;j++){
			if(vis[j]){
				continue;
			}
			long long kl=xz&a[j];
			if(kl>dx){
				hm=j;
				dx=kl;
			}
			if(dx==xz){
				break;
			}
		}
		xz=dx;
		vis[hm]=1;
	}
	cout<<xz;
	return 0;
}
