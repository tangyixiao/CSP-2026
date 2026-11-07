#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int p[200005];
int ans = 0;
void dfs(int x,int j,int sum)
{
	if(x == m + 1)
	{
		ans = max(ans,sum);
		return;
	}
	for(int i = j + 1;i <= n;i++)
	{
//		cout << x << " " << (sum & a[i]) << endl;
		dfs(x + 1,i,sum & a[i]);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	bool g = false;
	bool f = false;
	bool h = false; 
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
		p[a[i]]++;
		if(a[i] >= 4)
		{
			h = true;
		}
		if(a[i] != i - 1)
		{
			f = true;
		}
		if(a[i] & (a[i] + 1))
		{
			g = true;
		} 
	}
	if(!f && !(n & (n - 1)) && !(m & (m - 1)))
	{
		sort(a + 1,a + n + 1);
		cout << a[n - m + 1];
		return 0;
	}
	if(!g)
	{
		sort(a + 1,a + n + 1);
		cout << a[n - m + 1];
		return 0;
	}
	if(!h)
	{
		if(m <= p[3])
		{
			cout << 3;
		}
		else if(m <= (p[3] + p[2]))
		{
			cout << 2;
		}
		else if(m <= (p[3] + p[1]))
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
		return 0;
	}
	dfs(1,0,1048575);
	cout << ans;
	return 0;
}
