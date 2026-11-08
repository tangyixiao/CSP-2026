#include<bits/stdc++.h>
using namespace std;
const int MXN=500010;
int n,m,a[MXN],cd[MXN],id[MXN],ans[MXN],len;
bool vis[MXN];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		// printf("Round %d:\n",i);
		for(int i=1;i<=len;i++) cd[i]=0;
		for(int i=1;i<=m;i++) vis[i]=id[i]=0;
		len=0;
		for(int j=i;j<=n;j++){
			// printf("j=%d a[j]=%d \n\n",j,a[j]);
			if(vis[a[j]]){
				for(int k=id[a[j]]+1;k<=len;k++){
					// printf("k=%d a[k]=%d\n",k,a[k]);
					cd[k]=0;
					vis[a[k]]=0;
					id[a[k]]=0;
				}
				len=id[a[j]];
			}
			else{
				cd[++len]=a[j];
				vis[a[j]]=1;
				id[a[j]]=len;
			}
			/*
			printf("len=%d\ncd[]:\n",len);
			for(int i=1;i<=len;i++) printf("%d ",cd[i]);
			printf("\n\n");
			printf("vis[]:\n");
			for(int i=1;i<=m;i++) printf("%d ",vis[i]);
			printf("\n\n");
			printf("id[]:\n");
			for(int i=1;i<=m;i++) printf("%d ",id[i]);
			printf("\n\n");
			*/
		}
		for(int i=1;i<=m;i++) ans[i]+=vis[i];
		/*
		printf("ans[]:\n");
		for(int i=1;i<=m;i++) printf("%d ",ans[i]);
		printf("\n");
		*/
	}
	for(int i=1;i<=m;i++){
		if(i!=1) printf(" ");
		printf("%d",ans[i]);
	}
	return 0;
}
