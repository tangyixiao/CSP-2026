#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+20;
int a[N],vis[M],b[N],t[M];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m,k;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		memset(vis,0,sizeof(vis));
		k=1;
		for(int j=i;j<=n;j++)
		{
			if(vis[a[j]] && vis[a[j]]<k)
				k=vis[a[j]];
			vis[a[j]]=k;
			b[k]=a[j];
			k++;
		}
		for(int j=1;j<k;j++)
			t[b[j]]++;
	}
	for(int i=1;i<=m;i++)
		cout<<t[i]<<' ';
	return 0;
}