#include<bits/stdc++.h>
using namespace std;
int n,m;
int zhi;
int a[500005];
int b[500005];
int t[500005];
bool vis[500005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		zhi=0;
		for(int j=1;j<=m;j++)
			vis[j]=false;
		for(int j=i;j<=n;j++){
			if(vis[a[j]]){
				while(b[zhi]!=a[j]){
					vis[b[zhi]]=false;
					b[zhi]=0;
					zhi--;
				}
				
			}
			else{
				zhi++;
				b[zhi]=a[j];
				vis[a[j]]=true;
			}
		}
		for(int j=zhi;j>=0;j--)
			t[b[zhi]]++,zhi--;
	}
	for(int i=1;i<=m;i++)
		cout<<t[i]<<' ';
	return 0;
}