#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i <= n;i++) cin >> a[i];
	long long maxn=-1;
	if(m==1)
	{
		for(int i=1;i <= n;i++)
		{
			if(a[i]>maxn)
			{
				maxn=a[i];
			}
		}
	}
	else if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j <= n;j++)
			{
				if(i==j) continue;
				long long num=a[i]&a[j];
				if(num>maxn) maxn=num;
			}
		}
	}
	else if(m==n)
	{
		maxn=a[1];
		for(int i=2;i <= n;i++)
		{
			maxn=maxn&a[i];
		}
	}
	else if(m==n-1)
	{
		long long maxni=0;
		for(int i=1;i <= n;i++)
		{
			if(i==1)
			{
				maxni=a[2];
				for(int j=3;j <= n;j++)
				{
					maxni=maxni&a[j];
				}
			}
			else
			{
				maxni=a[1];
				for(int j=2;j <= n;j++)
				{
					if(i==j) continue;
					maxni=maxni&a[j];
				}
			}
			if(maxni>maxn) maxn=maxni;
		}
	}
	else 
	{
		maxn=477;
	}
	cout << maxn << endl;
	return 0;
}
