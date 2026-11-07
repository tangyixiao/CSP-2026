#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
const int M=3e5+5;
int n,m;
int a[N],ans[M];
bool vis[M];
int p[M];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int k=1;k<=n;k++){		
		memset(vis,0,sizeof(vis));
		for(int i=k;i<=n;i++){
			if(vis[a[i]]==0){
				p[a[i]]=i,vis[a[i]]=1;
				continue;
			}
			for(int j=p[a[i]];j<i;j++)
				vis[a[j]]=0;
			p[a[i]]=i;
			vis[a[i]]=1;
			
		}
		for(int i=1;i<=m;i++)
			if(vis[i]==1)
				ans[i]++;
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<' ';
	return 0;
}