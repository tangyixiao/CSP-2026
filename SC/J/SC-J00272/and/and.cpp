#include<bits/stdc++.h>
using namespace std;
int a[200005][35];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m;
	long long b,qq,maxn=0;
	cin>>n>>m;
	if(m==1)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>b;
			maxn=max(maxn,b);
		}
		cout<<maxn;
		return 0;
		
	}
	for(int i=1;i<=n;i++)
	{
		cin>>b;
		int qw=0;
		qq=1;
		while(b)
		{
			if(qq>b)
			{
				n-=qq;
				qq=1;
				a[i][qw]=1;
				qw=0;
			}
			qq*=2;
			qw++;
		}
	}
	if(m==n)
	{
		for(int i=0;i<=30;i++)
		{
			bool qc=1;
			for(int j=1;j<=n;j++)
			{
				if(a[j][i]!=1)
				{
					qc=0;
				}
			}
			if(qc)
			{
				qq=1;
				for(int k=1;k<=i;k++)
				{
					qq*=2;
				}
				maxn+=qq;
			}
		}
		cout<<maxn;
	}
	if(m==2)
	{
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				long long z=0,x;
				for(int k=0;k<=30;k++)
				{
					if(a[i][k]==1&&a[j][k]==1)
					{
						x=1;
						for(int l=1;l<=k;i++)
						{
							x*=2;
						}
						z+=x;
					}
				}
				maxn=max(maxn,z);
			}
		}
		cout<<maxn;
		return 0;
	}
}
