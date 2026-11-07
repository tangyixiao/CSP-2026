#include<bits/stdc++.h>
using namespace std;
int a[500005],b[500005],vis[300005];
bool vis2[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	memset(b,0,sizeof(b));
	memset(vis,0,sizeof(vis));
	for(int i=1;i<=n;i++){
		memset(b,0,sizeof(b));
		memset(vis2,false,sizeof(vis2));
		for(int j=i;j<=n;j++){
			bool ok=true;
			for(int l=1;l<j-i+1;l++){
				if(b[l]==a[j]){
					ok=false;
				}
				if(!ok){
					b[l]=0;
				}
			}
			b[j-i]=a[j];
		}
		for(int j=1;j<=n;j++){
			if(b[j]){
				vis[b[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		if(i!=2){
			vis[i]++;
		}
		printf("%d",vis[i]);
		cout<<' ';
	}
	return 0;
}