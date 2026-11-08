#include<bits/stdc++.h>
using namespace std;
struct node
{
	int x,cnt;
}a[200005];
int n,m,dp[200005];
bool flagA,flagB;
int work_out(int w)
{
	int sum=0;
	while (w)
	{
		if (w&1)
		{
			sum++;
		}
		w>>=1;
	}
	return sum;
}
bool cmp(node p,node q)
{
	if (p.cnt!=q.cnt)
	{
		return p.cnt>q.cnt;
	}
	return p.x>q.x;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	if (work_out(n)!=1)
	{
		flagB=true;
	}
	for (int i=1;i<=n;i++)
	{
		cin>>a[i].x;
		a[i].cnt=work_out(a[i].x);
		if (pow(2,a[i].cnt)-1!=a[i].x)
		{
			flagA=true;
		}
		if (a[i].x!=i-1)
		{
			flagB=true;
		}
	}
	if (!flagB)
	{
		int sum=pow(2,31)-1;
		for (int i=n;i>=n-m+1;i--)
		{
			sum&=a[i].x;
		}
		cout<<sum;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	if (!flagA)
	{
		cout<<a[m].x;
		return 0;
	}
	dp[0]=pow(2,31)-1;
	for (int i=1;i<=n;i++)
	{
		for (int j=m;j>=1;j--)
		{
			dp[j]=max((int)(dp[j-1]&a[i].x),dp[j]);
		}
	}
	cout<<dp[m];
	return 0;
}
