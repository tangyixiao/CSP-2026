#include <iostream>
#include <cstdio>
#include <algorithm>
#define ll long long
using namespace std;

const int N=2e5+5;

ll n,m,res,a[N];

void dfs(ll step,ll cnt,ll tot)
{
	if (cnt==m)
	{
		res=max(res,tot);
		return ;	
	}	
	if (step>n) return ;
	
	dfs(step+1,cnt+1,tot&a[step]);
	dfs(step+1,cnt,tot);
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin >> n >> m;
	
	for (int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	
	sort(a+1,a+n+1,greater<int>());
	
	if (n<=20)
	{
		for (int i=1;i<=n;i++)
		{
			dfs(i,0,a[i]);
		}
		cout << res;
		return 0;
	}
	if (m==1)
	{
		cout << a[1];
		return 0;
	}
	if (n<=2000 && m==2)
	{
		for (int i=1;i<=n;i++)
		{
			for (int j=i+1;j<=n;j++)
			{
				res=max(res,a[i]&a[j]);
			}
		}
		
		cout << res;
		return 0;
	}
	if (m==n-1)
	{
		
	}
	
	res=a[1];
	for (int i=2;i<=m;i++) res&=a[i];
	cout << res;
	return 0;
}

/*
应该是一个2^(n-1)~2^n-1为划分，选取最大 
*/
