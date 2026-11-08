#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m;
int a[N],cnt[N];
int vis[N];
int flag[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		memset(flag,0,sizeof(flag));
		for(int j=i;j<=n;j++){
			if(vis[a[j]]>0&&flag[vis[a[j]]]==0){
				for(int k=vis[a[j]];k<j;k++)
					flag[k]=1;
			}
			vis[a[j]]=j;
		}
		for(int j=i;j<=n;j++){
			if(flag[j]==0){
				cnt[a[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++) printf("%d ",cnt[i]);
	return 0;
}
