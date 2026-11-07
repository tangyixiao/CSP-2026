#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5 + 10;

int n, m;
int arr[N];
int ans = -1;
int b[N];
int maxn;
bool flag = 1;
int c[7];

void dfs(int res, int d, int k)
{
	if(k > m)
	{
		ans = max(ans, res);
		return;
	}
	for(int i = d + 1; i <= n ; i ++)
	{
		dfs(res & arr[i], i, k + 1);
	}
}

signed main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out","w", stdout);
	
	cin>>n>>m;
	for(int i = 1; i <= n ; i ++)
	{
		cin>>arr[i];
		b[i] = -1;
		maxn = max(maxn, arr[i]);
		if(arr[i] >= 4) flag = 0;
	}
	
	if(n <= 2000)
	{
		for(int i = 1; i + m - 1 <= n ; i ++)
		{
			dfs(arr[i], i, 2);
		}
		cout<<ans<<endl;
		return 0;
	}
	
	
	if(flag)
	{
		for(int i = 1; i <= n ; i ++)
		{
			c[arr[i]] ++;
		}
		if(m <= c[3])
		{
			cout<<3<<endl;
			return 0;
		}
		if(m <= c[3] + c[2])
		{
			cout<<2<<endl;
			return 0;
		}
		if(m <= c[3] + c[1])
		{
			cout<<1<<endl;
			return 0;
		}
		cout<<0<<endl;
		return 0;
	}
	
	
	for(int i = 1; i <= n ; i++)
	{
		arr[i] = -arr[i];
	}
	
	sort(arr + 1, arr + n + 1);
	
	int ans = -arr[1];
	for(int i = 2; i <= m; i ++)
	{
		arr[i] = -arr[i];
		ans = ans & arr[i];
	}
	cout<<ans<<endl;
	return 0;
	
}
