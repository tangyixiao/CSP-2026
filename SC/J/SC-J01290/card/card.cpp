#include<bits/stdc++.h>

using namespace std;

int n,m;
int a[500005],ans[300005],vis[300005];
int q[500005],top=0;

int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==0)q[++top]=a[j],vis[a[j]]=top;
			else {
				for(int k=vis[a[j]]+1;k<=top;k++)vis[q[k]]=0;
				top=vis[a[j]];
			}
		}
		while(top){
			ans[q[top]]++;
			top--;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}