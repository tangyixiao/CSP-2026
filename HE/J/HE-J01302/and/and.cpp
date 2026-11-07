#include<bits/stdc++.h>
using namespace std;
int a[20050];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxn=-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(n<=2000 && m==1)
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]>maxn)
			{
				maxn=a[i];
			}
		}
		cout<<maxn;
	}
	if(n<=2000 && m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(j==i)
				{
					continue;
				}
				else
				{
					if((a[i] & a[j])>maxn)
					{
						maxn=(a[i] & a[j]);
					}
				}
			}
		}
		cout<<maxn;
	}
	return 0;
} 
