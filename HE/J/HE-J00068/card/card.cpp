#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[300005];
int ans[300005];
bool vis[300005];
int cnt[300005];
int p[300005];
int top=0,bot=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		memset(cnt,0,sizeof(cnt));
		memset(vis,0,sizeof(vis));
		top=0,bot=1;
		for(int j=i;j<=n;j++){
			if(!vis[a[j]]||(cnt[a[j]]>top)){
				p[++top]=a[j];
				cnt[a[j]]=top;
				vis[a[j]]=true;
			}else{
				top=cnt[a[j]];
			}
		}
		for(int j=1;j<=top;j++){
			ans[p[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}
