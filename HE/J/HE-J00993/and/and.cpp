#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
long long sum;
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	sum=a[1];
	for(int i=2;i<=m;i++)
	{
		sum&=a[i];
	}
	bool f=1;
	for(int i=2;i<=m;i++)
	{
		if(a[i]==a[i-1]-1)
		{
			f=0;
			break;
		}
	}
	if(f)
	{
		for(int i=2;i<=m;i++)
		{
			sum&=a[i];
		}
	}
	else
	{
		sum=a[1];
	}
	cout<<sum;
	return 0;
}
