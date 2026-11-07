#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int n,m,t=0;
int a[500010];
int p[500010];
int cnt[500010];
int pd(int x){
	for(int k=1;k<=t;k++) if(p[k]==x) return k;
	return 0;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	memset(p,0,sizeof(p));
	memset(cnt,0,sizeof(cnt));
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		t=0;
		memset(p,0,sizeof(p));
		for(int j=i;j<=n;j++){
			int tmp=pd(a[j]);
			if(tmp) t=tmp-1;
			p[++t]=a[j];
		}
		for(int j=1;j<=m;j++) if(pd(j)) cnt[j]++;		
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<' ';
	return 0;
}
