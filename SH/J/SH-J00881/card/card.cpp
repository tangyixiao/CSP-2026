#include <bits/stdc++.h>
using namespace std;
int a[500050];
int b[300050];
int c[300050];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	bool flag=1; 
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<a[i-1])
		{
			flag=0;
		}
	}
	if(flag)
	{
		for(int i=1;i<=n;i++)
		{
			c[a[i]]=i;
		}
		for(int i=1;i<=m;i++)
		{
			cout<<c[i]<<endl;
		}
		return 0;		
	}
	for(int i=1;i<=n;i++)
	{memset(b,0,sizeof(b));
		for(int j=i;j<=n;j++)
		{
			
			if(b[a[j]]!=0)
			{
				for(int k=b[a[j]];k<=j;k++)
				{
					b[a[k]]=0;
				}
				b[a[j]]=j;
			}
			else
			{
				b[a[j]]=j;
			}
		}
		for(int j=1;j<=m;j++)
		{
			if(b[j]!=0)
			{
				c[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<c[i]<<' ';
	}
	return 0;
}
