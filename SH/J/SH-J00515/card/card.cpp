//±©Á¦,O(n*n)
#include <bits/stdc++.h>
using namespace std;
int n,m,l,x[500010],r[500010],ans[300010];
bool fl[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;++i) scanf("%d",&x[i]);
	for(int i=n;i;--i) if(!r[x[i]]) r[x[i]]=i;
	for(int i=1;i<=n;++i){
		int j=i;
		while(j<=n){
			fl[x[j]]=true;
			if(r[x[j]]) j=r[x[j]]+1;
			else ++j;
		}
		j=i;
		while(j<=n){
			if(fl[x[j]]){
				ans[x[j]]++;
				fl[x[j]]=false;
			}
			if(r[x[j]]) j=r[x[j]]+1;
			else ++j;
		}
	}
	for(int i=1;i<=m;++i) printf("%d ",ans[i]);
	return 0;
}
