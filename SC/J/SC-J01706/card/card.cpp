#include <bits/stdc++.h>
#include <cstdio>
#include <stdio.h>
using namespace std;
const int N=5e5+5;
long long n,m,a[N],cx[N],pd[N],zn,v[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		memset(pd,0,sizeof(pd));
		memset(v,0,sizeof(v));
		zn=0;
		for(int j=i;j<=n;j++)
		{
			if(!v[a[j]])
			{
				zn++;
				v[a[j]]=zn;
				pd[zn]=a[j];
			}
			else
			{
				for(;zn>v[a[j]];zn--)
				{
					v[a[pd[zn]]]=0;
				}
			}
		}
		for(int j=1;j<=zn;j++)
		{	
			cx[pd[j]]++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(cx[a[i]]!=-1)
		{
			cout<<cx[a[i]]<<" ";
			cx[a[i]]=-1;
		}
	}
	return 0;
}