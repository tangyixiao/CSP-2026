#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],c[300001];
int fff(int nn)
{
	bool ff[300001];
	for(int i=1;i<=m;i++)
	{
		ff[i]=1;
	}
	if(ff[a[nn]]==1)
	{
		c[a[nn]]=nn;
		ff[a[nn]]=0;
	}
	nn--;
	return 0;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	bool f=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]==a[n])
		{
			f=1;
			break;
		}
	}
	if(f==0)
	{
		for(int i=1;i<=m;i++)
		{
			fff(n);
		}
	}
	else
	{
		for(int i=1;i<n;i++)
		{
			c[a[i]]++;
		}
		c[a[n]]=n;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
