#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,ma,maa;
bool f[N];
int a[N];
int mp[15];
void dfs(int i,int sum,int an)
{
	if(sum==m)
	{
		ma=max(an,ma);
		return;
	}
	for(int j=1;j<=n;j++)
	{
		if(f[j]) continue;
		f[j]=1;
		dfs(i+1,sum+1,an&a[j]);
		f[j]=0;
	}
}
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maa=max(maa,a[i]);
	}
	if(n<=20)
	{
		dfs(0,0,(1<<30)-1);
		cout<<ma;
		return 0;
	}
	if(n<=2000)
	{
		if(m==1)
		{
			int ma=0;
			for(int i=1;i<=n;i++)
			{
				ma=max(ma,a[i]);
			}
			cout<<ma;
			return 0;
		}
		if(m==n)
		{
			int t=a[1];
			for(int i=2;i<=n;i++)
			{
				t=t&a[i];
			}
			cout<<t;
			return 0;
		}
		int ma=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				ma=max(ma,a[i]&a[j]);
			}
		}
		cout<<ma;
		return 0;
	}
	if(maa<4)
	{
		for(int i=1;i<=n;i++)
		{
			mp[a[i]]++;
		}
		m-=mp[3];
		if(m<=0)
		{
			cout<<3;
			return 0;
		}
		m-=mp[2];
		if(m<=0)
		{
			cout<<2;
			return 0;
		}
		cout<<0;
		return 0;
	}
	else
	{
		sort(a+1,a+n+1,cmp);
		int t=a[1];
		for(int i=2;i<=m;i++)
		{
			t=t&a[i];
		}
		cout<<t;
	}
	return 0;
}