#include<bits/stdc++.h>
using namespace std;
int a[500005],b[300005],c[500005],r[300005];
void f(int x,int y)
{
	int p=0;
	for(int i=1;i<y;i++)
	{
		if(c[i]==x)
		{
			p=1;
			c[i]=0;
		}
		else if(p==1)
		{
			b[c[i]]=0;
			c[i]=0;
		}
	}
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		a[i-1]=0;
		for(int j=1;j<=n;j++)
		{
			c[j]=a[j];
		}
		for(int j=1;j<=n;j++)
		{
			if(b[c[j]]==0)
			{
				b[c[j]]=1;
			}
			else if(b[c[j]]==1)
			{
				f(c[j],j);
			}
		}
		for(int i=1;i<=m;i++)
		{
			if(b[i]==1)
			{
				r[i]++;
			}
			b[i]=0;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<r[i]<<" ";
	}
	return 0;
} 