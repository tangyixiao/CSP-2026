#include<bits/stdc++.h>
using namespace std;
int n,m,b[5010],a[5010],v[3010],c,ans[3010],e[3010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	memset(e,-1,sizeof(e));
	for(int i=1;i<=n;++i) scanf("%d",&a[i]);
	for(int i=n-1;i>=0;--i) b[i]=a[n-i];
	for(int i=0;i<n;++i){
		a[c++]=b[i];
		if(e[b[i]]!=-1){
			for(int j=e[b[i]]+1;j<i;++j){
				v[b[j]]=0,e[b[j]]=-1;
			}
			c=e[b[i]]+1; 
		}
		else e[b[i]]=i,v[b[i]]=1;
		for(int j=1;j<=m;++j)
			if(v[j])
				ans[j]++;
	}
	for(int i=1;i<=m;++i) printf("%d ",ans[i]);
	return 0;
} 
