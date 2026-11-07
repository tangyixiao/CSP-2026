#include<bits/stdc++.h>
using namespace std;
int a[500005];
int w[300005];
int ans[300005];
bool vis[300005];
int main(){
	//Trick||Treat!
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int top=0;
		for(int j=i;j<=n;j++){
			
			if(vis[a[j]]==0){
				vis[a[j]]=1;
				w[a[j]]=++top;
			}
			if(vis[a[j]]==1){
				for(int x=w[a[j]];x<=top;x++){
					vis[a[x]]=0;
				}
				top=w[a[j]];
			}
		}
		cout<<top<<" ";
		for(int j=1;j<=n;j++){
			if(vis[j]){
				ans[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
