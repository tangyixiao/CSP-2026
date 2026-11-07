#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],ans[30010],sm[300010],nm[300010],f;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){scanf("%d",&a[i]);nm[a[i]]++;}
	for(int i=1;i<=n;i++){
		memset(sm,0,sizeof sm);
		for(int j=i;j<=n;j++){
			if(nm[a[j]]>1){
				f=n;
				while(a[f]!=a[j]) f--;
				j=f;
			}sm[a[j]]++;
		}for(int j=1;j<=m;j++) if(sm[j]) ans[j]++;
	}for(int j=1;j<=m;j++) printf("%d ",ans[j]);
	return 0;
}
