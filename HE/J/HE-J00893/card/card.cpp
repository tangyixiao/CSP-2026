#include <bits/stdc++.h>
using namespace std;
long long a[10005],b[10005],c[10005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long  n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		
		for(int z=1;z<=n;z++)
		{
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;i<=n;i++)
				{
					b[1]=a[1];
					if(a[j]!=a[i])
					{
						b[j]=a[i];
					}
					else
					{
						for(int q=1;q<=j;j++)
						{
							b[i]=b[q];
						}
					}
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;i<=m;j++)
			{
				if(b[i]=j)
				{
					c[j]+=1;
				}
			}
			
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<c[i];
	}
	return 0;
}


