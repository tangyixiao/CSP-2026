#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],f[500005],g[500005],cf[500005],ans[500005],b[500005];
int main(){
	//printf()
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n;i++) g[i] = 1;
	for(int i=n;i>=1;i--) b[i] = f[a[i]] , f[a[i]] = i;
    for(int i=1;i<=n;i++){
    	g[b[i]] += g[i];
    	if(b[i]==0) g[i+1] += g[i];
	}
    for(int i=1;i<=n;i++) if(b[i]!=0) cf[i]+=g[i] , cf[b[i]]-=g[i];
    for(int i=1;i<=n;i++) cf[i] += cf[i-1];
    for(int i=1;i<=n;i++) ans[a[i]] += i-cf[i];
    for(int i=1;i<=m;i++) printf("%d ",ans[i]);
	return 0;
}

