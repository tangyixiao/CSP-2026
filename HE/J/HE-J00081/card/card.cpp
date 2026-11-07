#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5 + 100;
int l[N];
int sum[N];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int a[n + 10];
	int z[n + 10];
	int t = 0;
	int maxx = INT_MIN;
	for(int i = 1;i <= n;i ++)
	{
		cin >> a[i];
		maxx = max(a[i],maxx);
	}
	for(int i = 1;i <= n;i ++)
	{
		t = 0;
		fill(l,l + maxx + 2,-1);
		for(int j = i;j <= n;j ++)
		{
			z[++ t] = a[j];
			if(l[a[j]] != -1)
			{
				for(int k = l[a[j]] + 1;k < t;k ++) l[z[k]] = -1;
				t = l[a[j]];
			}
			l[a[j]] = t;
		}
		for(int j = 1;j <= t;j ++)
		{
			sum[z[j]] ++;
		}
	}
	for(int i = 1;i <= m;i ++)
	{
		cout << sum[i] << " ";
	}
	return 0;
}
