#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m;
int a[N],ans[N],b[N],vis[N];
void jia(int x,int y,int z){
	ans[x]+=z;
	ans[y+1]-=z;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		int tot=0;
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(vis[a[j]]){
				for(int k=tot;k>=1;k--){
					vis[b[k]]=0;
					if(b[k]==a[j]){
						tot=k-1;
						break;
					}
				}
			}
			b[++tot]=a[j];
			vis[a[j]]=1;
		}
//		cout<<tot<<"\n";
		for(int j=1;j<=tot;j++) ans[b[j]]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
