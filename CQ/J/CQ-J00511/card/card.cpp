#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m,a[N],b[N],c[N],id[N],tot;
bool vis[N];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int k=1;k<=n;k++)
	{
		memset(vis,0,sizeof(vis));
		memset(id,0,sizeof(id));memset(c,0,sizeof(c));tot=0;
		for(int i=k;i<=n;i++)
		{
			if(vis[a[i]]) 
			{
				for(int j=id[a[i]]+1;j<=n;j++) 	if(c[j]) tot--,vis[c[j]]=0,c[j]=0;
			}
			else vis[a[i]]=1,id[a[i]]=++tot,c[tot]=a[i];	
		}
		for(int j=1;j<=m;j++) b[c[j]]++;
	}
	for(int i=1;i<=m;i++) cout<<b[i]<<' ';
	return 0;
 }
