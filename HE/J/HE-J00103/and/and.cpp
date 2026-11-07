#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e6+10;
ll n,m,a[N],ans,num,sum,kpl,kok,pop,lol;
bool check(ll x)
{
	while(x!=0)
	{
		if(x==1)
		{
			break;
		}
		if(x%2!=0)
		{
			return false;
		}
		x/=2;
	}
	return true;
}
bool cmp(ll x,ll y)
{
	return x>y;
}
void dfs(ll x,ll y,ll gay)
{
	if(x==m)
	{
		ans=max(ans,gay);
		return;
	}
	for(int i=y;i<=n;i++)
	{
		dfs(x+1,i,gay&a[i]);
	}
	return;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		num=max(num,a[i]);
		if(check(a[i]+1))
		{
			kok++;
		}
		if(a[i]==i-1)
		{
			pop++;
		}
	}
	if(m==1)
	{
		cout<<num;
		return 0;
	}
	if(m==n)
	{
		cout<<sum;
		return 0;
	}
	if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if(i!=j)
				{
					kpl=a[i]&a[j];
					ans=max(ans,kpl);
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(kok==n)
	{
		sort(a+1,a+n+1,cmp);
		cout<<a[m];
		return 0;
	}
	if(m==n-1)
	{
		sort(a+1,a+n+1);
		ans=a[2];
		for(int i=3;i<=n;i++)
		{
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	if(pop==n)
	{
		sort(a+1,a+n+1,cmp);
		ans=a[1];
		for(int i=2;i<=m;i++)
		{
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	dfs(1,1,a[1]);
	cout<<ans;
	return 0;
}
