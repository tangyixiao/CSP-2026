#include<bits/stdc++.h>
using namespace std;

int l[500005], pre[500005], nxt[500005], a[500005], ans[300005], ed[300005];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n, m;
	cin>>n>>m;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
		pre[i]=l[a[i]];
		nxt[pre[i]]=i;
		l[a[i]]=i;
	}
	for(int i=1; i<=n; i++)
	{
		int j=i;
		while(nxt[j]!=0)j=nxt[j];
		ed[a[i]]=j;
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=i; j<=n; j++)
		{
			j=ed[a[j]];
			ans[a[j]]++;
		}
	}
	for(int i=1; i<=m; i++)cout<<ans[i]<<" ";
	return 0; 
}


