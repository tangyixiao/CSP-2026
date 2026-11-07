#include<bits/stdc++.h>
using namespace std;
int q[500005];
int a1[500005];
int a[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	memset(a,-1,sizeof(a));
	int n,m;
	int len=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a1[i];
		if(a[a1[i]]==-1)
		{
			a[len]=a1[i];
			len++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			for(int k=1;k<=m;k++)
			{
				if(a[j]==k)
				{
					q[k]++;
				}
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<q[i]<<" ";
	}
	return 0;
}