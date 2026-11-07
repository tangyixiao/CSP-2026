#include <bits/stdc++.h>
using namespace std;
int a[10000],y[10000];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,b,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>b;
		a[i]=b;
	}
	int num=0;
	for (int i=1;i<=n;i++)
	{
		int p=0,q[1000];
		num=i;
		for (int j=i;j<=n;j++)
		{
			for (int t=num;t<j;t++)
			{
				if (a[t]==a[j])
				{
					num=j;
				}
			}
		}
		for(int x=num;x<=n;x++)
		{
			y[a[x]]+=1;
		}
	}
	for (int i=1;i<=m;i++)
	{
		cout<<y[i]<<" ";
	}
	return 0;
}
