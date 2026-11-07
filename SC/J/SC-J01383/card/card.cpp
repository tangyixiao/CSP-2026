#include<bits/stdc++.h>
using namespace std;
int a[1001],b[1001];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]==a[i-1])a[i-1]=0;
	}
	for(int i=1;i<=m;i++)
	{
		int num=0;
		for(int k=1;k<=n;k++)
		{
			for(int j=k;j<=n;j++)
			{
				if(a[j]!=0&&a[j]==i)
				{
					num++;
				}
			}
		}
		cout<<num<<' ';
	}
	return 0;
}