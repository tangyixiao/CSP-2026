#include<bits/stdc++.h> 
using namespace std;
int a[5005],b[5005];
int mian(){
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
		for(int j=n;j>=i;j--)
		{
			for(int k=1;k<=j;j++)
			{
				if(a[i]==a[k])
				{
					for(int l=a[k+1];l<=a[i-1];l++)
					{
						a[l]=0;
					}
				}
			}
			for(int h=1;h<=j;h++)
			{
				b[h]++;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j++)
		{
			if(a[j]==a[i])
			{
				a[i]=0;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=0)
		{
			cout<<b[i]<<" ";
		}
	}
	return 0;
}
