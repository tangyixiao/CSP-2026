#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],sum=-1e10,x;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(m==1)
	{
		for(int i=1;i<=n;i++)
			sum=max(sum,a[i]);
		cout<<sum;
		return 0;
	}
	if(m==n)
	{
		sum=a[1];
		for(int i=2;i<=n;i++)
			sum=(sum&a[i]);
		cout<<sum;
		return 0;
	}
	if(n>2000)
	{
		int e=0;
		sort(a+1,a+n+1);
		for(int i=n;i>=1;i--)
		{
			e++;
			x=a[i];
			if(e==4)
			  break;
			for(int j=i-1;j>=i-m+1;j--)
				x=(x&a[j]);
			sum=max(sum,x);
		}
		cout<<sum;
		return 0;
	} 
	if(m==2)
	{
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				sum=max(sum,a[i]&a[j]);
		cout<<sum;
		return 0;
	}
	if(m==n-1)
	{
		for(int i=1;i<=n;i++)
		{
			if(i==1)
			  x=a[2];
			else
			  x=a[1];
			for(int j=1;j<=n;j++)
			{
				if(i==j)
				  continue;
				x=(x&a[j]);
			}
			sum=max(x,sum);
		}
		cout<<sum;
		return 0;
	}
	sort(a+1,a+n+1);
	for(int i=n;i>=1;i--)
	{
		x=a[i];
		for(int j=i-1;j>=i-m+1;j--)
			x=(x&a[j]);
		sum=max(sum,x);
	}
	cout<<sum;
	return 0;
}
