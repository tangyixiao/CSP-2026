#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5,M=35;
int n,m,k,v[N],vis[N],a[N][M];
long long s,ans,b[M];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s; int t=1;
		while(s!=0){
			a[i][t]=s%2;
			s/=2,t++;
		}
		k=max(k,t-1);
	}
	b[1]=1;
	for(int i=2;i<=k;i++) b[i]=b[i-1]*2;
	for(int j=k;j>=1;j--){
		memset(v,0,sizeof v);
		int x=0;
		for(int i=1;i<=n;i++){
			if(vis[i]==1) continue;
			if(!a[i][j]) v[i]=1;
			x+=a[i][j];
		}
		if(x>=m){
			ans+=b[j];
			for(int i=1;i<=n;i++){
				vis[i]=max(vis[i],v[i]);
			}
		}
	}
	cout<<ans;
	return 0;
}