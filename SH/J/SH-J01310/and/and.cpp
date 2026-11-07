#include<bits/stdc++.h>
using namespace std;

int a[200005];
//int dp[200005][200005];

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	sort(a + 1,a + n + 1);
	if(m == 1)
	{
		int maxx = -1;
		for(int i = 1;i <= n;i++)
		{
			maxx = max(maxx,a[i]);
		}
		cout << maxx;
	}
	else if(m == 2)
	{
		int maxx = -1;
		for(int i = 1;i <= n;i++)
		{
			for(int j = i;j <= n;j++)
			{
				maxx = max(maxx,a[i]&a[j]);
			}
		}
		cout << maxx;
	}
	else if(m == n)
	{
		int sum = 0;
		for(int i = 1;i <= n;i++)
		{
			sum &= a[i];
		}
		cout << sum;
	}
	return 0;
}
