#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],x[500005],g[500005],c[300005],f[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		int cnt=0;
		for(int j=i;j<=n;j++){
			if(c[a[j]]==0) x[++cnt]=a[j],g[a[j]]=cnt,c[a[j]]=1;
			else{
				for(int k=g[a[j]];k<=cnt;k++) x[k]=0;
				cnt=g[a[j]],x[cnt]=a[j];
			}
		}
		for(int j=1;j<=cnt;j++) f[x[j]]++;
	}
	for(int i=1;i<=m;i++) cout<<f[i]<<' ';
	return 0;
}

