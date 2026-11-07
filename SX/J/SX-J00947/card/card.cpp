#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
struct st{
	long long x,z;
}a[N];
long long c[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].x;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			a[j].z=0;
		}
		for(int j=i;j<=n;j++)
		{
			for(int k=i;k<j;k++)
			{
				if(a[k].z==0 && a[k].x==a[j].x)
				{
					for(int p=k;p<j;p++)
						a[p].z=1;
				}
			}
		}
		for(int j=i;j<=n;j++)
		{
			if(a[j].z==0)
				c[a[j].x]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}