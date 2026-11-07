#include<bits/stdc++.h>
using namespace std;
long long a[200005][35],b[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,f=0;
	cin>>n>>m;
	for(int i = 1; i<= n; i++)
	{
		long long x;
		cin>>x;
		long long p=1,cnt=0;
		while(p<=x)
		{
			p*=2;
			cnt++;
		}
		for(int j = 1; j<=cnt; j++)
		{
			a[i][j]=x%2;
			x/=2;
		}
		b[i]=1;
	}
	int ii=0;
	for(int i = 30; i>=1; i--)
	{
		long long t=0;
		for(int j = 1; j<= n; j++)
		{
			if(a[j][i]==1&&b[j]==1)
			{
				t++;
			}
		}
		if(t>=m)
		{
			if(f==0)
			{
				ii=i;
			}
			f=1;
			a[200001][i]=1;
			for(int j = 1; j<= n; j++)
			{
				if((a[j][i]==1&&b[j]==1)||f==0)
				{
					b[j]=1;
				}
				else
				{
					b[j]=0;
				}
			}
		}
	}
	long long ans=0;
	for(int i = ii; i>=1; i--)
	{
		ans+=a[200001][i];
		ans*=2;
	}
	ans/=2;
	cout<<ans;
	return 0;
}
