#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+1;
long long a[MAXN];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n,m,sum1=0,sum2;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum1=max(sum1,a[i]);
		if(i==1)
		{
			sum2=a[i];
		}
		else if(i==2)
		{
			sum2&=a[i];
		}
		else if(i==n)
		{
			sum2&=a[i];
		}
		else
		{
			sum2&=a[i];
		}
	}
	if(m==1)
	{
		cout<<sum1;
		return 0;
	}
	if(m==n)
	{
		cout<<sum2;
		return 0;
	}
	int maxn=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			int sum=a[i]&a[j];
			maxn=max(maxn,sum);
		}
	}
	cout<<maxn;
	return 0;
}