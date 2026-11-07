#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int maxn=0;
	for(int i=0;i<n;i++)cin>>a[i];
	if(m==1)
	{
		for(int i=0;i<n;i++)maxn=max(maxn,a[i]);
	}
	else if(m==2)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				int x=0;
				if(j!=i)x=a[i]&a[j];
				maxn=max(maxn,x);
			}
		}
	 } 
	else if(m==n)
	{
		int x=a[0];
		for(int i=1;i<n;i++)
		{
			x=x&a[i];
		}
		maxn=x;
	}
	else if(m==n-1)
	{
		for(int i=0;i<n;i++)
		{
			int x;
			if(i!=0)x=a[0];
			else x=a[1];
			for(int j=0;j<n;j++)
			{
				if(j!=i)x=x&a[j];
			}
			maxn=max(maxn,x);
		}
	}
	cout<<maxn;
	return 0;
}