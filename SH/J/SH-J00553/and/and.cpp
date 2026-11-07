#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
long long a[200005];
int n,m;
bool vis[200005];
long long ans=0;
int cnt[200005];
long long p[200005],e[200005];
bool po(long long n)
{
	while (n>1)
	{
		if (n%2) return false;
		n/=2;
	}
	return true;
}
void dfs(int step,long long sum)
{
	if (step>m)
	{
		ans=max(ans,sum);
		return;
	}
	for (int i=1;i<=n;i++)
	{
		if (vis[i]) continue;
		vis[i]=1;
		if (step==1) dfs(step+1,a[i]);
		else dfs(step+1,sum&a[i]);
		vis[i]=0;
	}
}
void m1()
{
	long long maxn=0;
	for (int i=1;i<=n;i++)
	{
		maxn=max(maxn,a[i]);
	}
	cout<<maxn<<endl;
}
void m2()
{
	long long ans=0;
	for (int i=1;i<=n;i++)
	{
		for (int j=i+1;j<=n;j++)
		{
			ans=max(ans,a[i]&a[j]);
		}
	}
	cout<<ans<<endl;
}
void mn()
{
	long long ans=a[1];
	for (int i=2;i<=n;i++)
	{
		ans=ans&a[i];
	}
	cout<<ans<<endl;
}
void mn1()
{
	long long ans=0;
	p[1]=a[1];
	for (int i=2;i<=n;i++)
	{
		p[i]=p[i-1]&a[i];
	}
	e[n]=a[n];
	for (int i=n-1;i>=1;i--)
	{
		e[i]=e[i+1]&a[i];
	}
	for (int i=1;i<=n;i++)
	{
		if (i==1) ans=max(ans,e[2]);
		else if (i==n) ans=max(ans,p[n-1]);
		ans=max(ans,p[i-1]&e[i+1]);
	}
	cout<<ans<<endl;
}
void A()
{
	sort(a+1,a+n+1);
	cout<<a[n-m+1];
}
void B()
{
	long long ans=a[n];
	for (int i=n-1;i>=n-m+1;i--)
	{
		ans=ans&a[i];
	}
	cout<<ans<<endl;
}
void a4()
{
	for (int i=1;i<=n;i++)
	{
		cnt[a[i]]++;
	}
	if (m<=cnt[3])
	{
		cout<<3<<endl;
	}
	else if (m<=cnt[3]+cnt[2])
	{
		cout<<2<<endl;
	}
	else if (m<=cnt[3]+cnt[1])
	{
		cout<<1<<endl;
	}
	else
	{
		cout<<0<<endl;
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool flagA=true,flagB=true,flag4=true;
	flagB=po(n);
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
		if (a[i]>=4) flag4=false;
		if (a[i]!=i-1) flagB=false;
		if (!po(a[i]+1)) flagA=false;
	}
	if (m==1) m1();
	else if (m==2) m2();
	else if (m==n) mn();
	else if (m==n-1) mn1(); 
	else if (flagA) A();
	else if (flagB) B();
	else if (flag4) a4();
	else
	{
		dfs(1,0);
		cout<<ans<<endl;
	}
	return 0;
}
