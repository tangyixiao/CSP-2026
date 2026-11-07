#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500010],ma[500010],cp[500010];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool niko=true;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<a[i-1])niko=false;
	}
	if(niko)
	{
		for(int i=1;i<=n;i++)
		{
			cp[a[i]]=i;
		}
		for(int i=1;i<=m;i++)
		{
			cout<<cp[i]<<" ";
		}
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		memset(ma,0,sizeof(ma));
		int l=i;
		for(int j=i;j<=n;j++)
		{
			if(ma[a[j]]==1)
			{
				l=j;
			}
			ma[a[j]]=1;
		}
		for(int k=l;k<=n;k++)
		{
			cp[a[k]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<cp[i]<<" ";
	} 
	return 0;
}
