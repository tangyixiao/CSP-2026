#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[500005],b[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1 ;i<=n ;i++)
	{
		cin>>a[i];
	}
	int x1=0,x2=0;
	for(int i=1;i<=n;i++)
	{
		x1++,x2++;
		b[x1]=a[x2];
		for(int j=1;j<=n;j++)
		{
			if(a[x2+1]==b[j])
			{
				for(int k=j;k<=n;k++)
				{
					b[k]=0;
					int x1=0;					
				}

			}
		}
		if(x2==n)
		{
			int x1=0,x2=0;
			ans[b[1]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	//哎呦我去，来的第一年只会t1 
	return 0; 
}
