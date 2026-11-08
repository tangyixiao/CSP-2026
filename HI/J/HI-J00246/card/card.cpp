#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],l[300005];
int pos=1;
int f[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(f[a[j]]>0){
				for(int k=f[a[j]];k<j;k++){
					f[a[k]]=-1;
				}
			}
			f[a[j]]=j;
		}
		for(int j=1;j<=m;j++){
			if(f[j]>0)l[j]++;
		}
		memset(f,0,sizeof(f));
	}
	for(int i=1;i<=m;i++){
		printf("%d ",l[i]);
	}
	return 0;
}
