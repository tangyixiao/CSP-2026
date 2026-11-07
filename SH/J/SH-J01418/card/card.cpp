#include<bits/stdc++.h>
using namespace std;
int a,b,c[500005],ans[300005],d[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	//google小恐龙怎么200多就有翼龙了 
	cin>>a>>b;
	if(a==b)
	{
		for(int i=1;i<=a;i++)
		{
			cout<<a<<" ";
		}
		return 0;
	}
	for(int i=1;i<=a;i++)
	{
		cin>>c[i];
	}
	for(int i=1;i<=a;i++)
	{
		d[i]=c[i];
	}
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=a;j++)
		{
			c[i]=d[i];
		}
		for(int j=i;j<=a;j++)
		{
			for(int k=i;k<=j;k++)
			{
				if(c[k]==c[j])
				{
					for(int l=k;l<=j;l++)
					{
						c[l]=-1;
					}
					break;
				}
			}
		}
		for(int j=i;j<=a;j++)
		{
			if(c[j]!=-1)
			{
				ans[c[j]]++;
			}
		}
	}
	for(int i=1;i<=b;i++)
	{
		cout<<ans[b]<<" ";
	}
	return 0;
}
