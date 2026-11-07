#include <bits/stdc++.h>
using namespace std;
long long a[200005],n,m;
bool cmp(int x,int y)
{
	return x>y;
}
void solve_1()
{
	sort(a+1,a+n+1,cmp);
	cout<<a[1];
}
void solve_n()
{
	long long s=a[1];
	for(int i=2;i<=n;i++)
	{
		s=s&a[i];
	}
	cout<<s;
}
void solve_2()
{
	sort(a+1,a+n+1,cmp);
	long long t=a[1]&a[2];
	cout<<t; 
}
/*void solve_20()
{
	long long ans=1,maxn=-1;
	for(int p=1;p<=m;p++)
	{
		maxn=-1;
		for(int i=1;i<=n;i++)
		{
			maxn=max(maxn,ans&a[i]);
		}
		ans=maxn;
	}
	cout<<ans;
}*/
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==1)
	{
		solve_1();
		return 0;
	}
	if(m==n)
	{
		solve_n();
		return 0;
	}
	if(m==2)
	{
		solve_2();
		return 0;
	}
	else
	{
		sort(a+1,a+n+1,cmp);
		long long s=a[1];
		for(int i=2;i<=m;i++)
		{
			s=s&a[i];
		}
		cout<<s;
	}
	return 0;
}
