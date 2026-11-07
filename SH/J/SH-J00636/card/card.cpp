#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 5e5 + 10;
const int M = 3e5 + 10;
int n, m;
int a[N], sum[N];
int ans[M];
map<int, int> mp;
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
		sum[a[i]] ++;
		mp[a[i]] = i;
	}
	bool flag = true;
	for(int i = 2; i <= n; i ++)
	{
		if(a[i] < a[i - 1])
		{
			flag = false;
			break;
		}
	}
	if(flag == true)
	{
		int lst = 0;
		for(int i = 1; i <= m; i ++) 
		{
			cout << lst + sum[i] << " ";
			lst += sum[i];
		}
		return 0;
	}
	for(int i = 1; i <= n; i ++)
	{
		int j = i;
		while(j <= n)
		{
			int nxt = mp[a[j]];
			ans[a[nxt]] ++;
			j = nxt + 1;
		}
	}
	for(int i = 1; i <= m; i ++) cout << ans[i] << " ";
	return 0;
}
