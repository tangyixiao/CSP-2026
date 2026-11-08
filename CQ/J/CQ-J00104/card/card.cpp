#include<bits/stdc++.h>
using namespace std;
int a[500005];
int b[500005];
int c[500005];
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
	if(m==1)
	{
		cout<<n;
		return 0;
	}
	int f=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			int j1=j-1;
			f+=j;
			while(j1>=i)
			{
				if(b[j1]==b[j])
				{
					f=j1;
					break;
				}
				j1--;
			}
			b[f]=a[j];
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=f;j++)
		{
			if(b[j]==i)
			{
				c[i]+=1;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
