#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int a[N],cnt[M],f[M],d[M],c[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,maxs=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxs=max(maxs,a[i]);
	}
	for(int i=1;i<=m;i++){
		int ans=0;
		for(int j=1;j<=n;j++){
			int t=0;
			for(int k=0;k<=maxs;k++){
				f[k]=0;
			}
			for(int k=j;k<=n;k++){
				if(f[a[k]]==0){
					d[a[k]]=++t;
					c[t]=a[k];
					f[a[k]]=1;
				}
				else{
					for(int k=d[a[k]];k<=t;k++){
						f[c[k]]=0;
					}
					t=d[a[k]];
					d[a[k]]=++t;
					c[t]=a[k];
					f[a[k]]=1;
				}
			}
			if(f[i]) ans++;
		}
		cout<<ans<<" ";
	}
	return 0;
}
