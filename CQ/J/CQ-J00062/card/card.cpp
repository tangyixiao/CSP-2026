#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+5;
int fl[N],bok[N],a[N],vis[N];
signed main()
{
 	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int k=1;k<=n;k++)
	{
		memset(fl,0,sizeof(fl));
		memset(vis,0,sizeof(vis));
		int l=n,r=0;
		for(int i=k;i<=n;i++)
		{
			if(fl[a[i]] && !vis[fl[a[i]]]) 
			{
				for(int j=fl[a[i]];j<i;j++) vis[j]=1;
			} 
			fl[a[i]]=i;
		}
		for(int i=k;i<=n;i++)
		{
			if(vis[i]) continue; 
			bok[a[i]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<bok[i]<<' ';
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
