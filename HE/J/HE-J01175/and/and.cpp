#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5*2;
int n,a[N+10],m,maxn=-1;
bool cmp(int x,int y)
{
	return x>y;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	if(m==1)
	{
		cout<<a[1];
		return 0;
	}
	if(m==n)
	{
		int s=a[1];
		for(int i=1; i<=n; i++)
		{
			s=s&a[i];
		}
		cout<<s;
		return 0;
	}
	for(int i=1; i<=n; i++)
	{
		int sum=a[i];
		for(int j=i; j<=i+m; j++)
		{
			sum&=a[j];
		}
		if(sum>maxn)
		{
			maxn=sum;
		}
	}
	cout<<maxn;
	return 0;
}
