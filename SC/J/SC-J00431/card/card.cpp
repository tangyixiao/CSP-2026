#include<bits/stdc++.h>
using namespace std;
int a[200010],ans[200010];
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	if(m==1)
	{
		cout<<n;
	}
	bool pd=true;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<a[i-1])
		{
			pd=false;
		}
	}
	if(pd)
	{
		for(int i=1;i<=m;i++)
		{
			if(a[i]!=a[i+1])
			{
				cout<<i<<' ';
			}
		}
		return 0;
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			int t[200010];
			int it=0;
			for(int j=i;j<=n;j++)
			{
				bool sg=false;
				for(int k=1;k<=it;k++)
				{
					if(t[k]==a[j])
					{
						sg=true;
						it=k;
						break;
					}
				}
				if(sg)
				{
					break;
				}
				t[++it]=a[j];
			}
			for(int j=1;j<=it;j++)
			{
				ans[t[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' ';
	}
    return 0;
}
