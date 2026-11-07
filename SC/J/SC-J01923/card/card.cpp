#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int ans[300005];
int vis[300005];
int c[500005],size=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdin);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}for(int x=1;x<=n;x++){
		for(int i=x;i<=n;i++){
			if(vis[a[i]]==0){
				size++;
				vis[a[i]]=size;
				c[size]=a[i];
			}else{
				for(int j=vis[a[i]]+1;j<=size;j++){
					vis[c[j]]=0;
				}
				size=vis[a[i]];
			}
		}
		for(int j=1;j<=size;j++){
			vis[c[j]]=0;
			ans[c[j]]++;
		}
		size=0;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}