#include<bits/stdc++.h>
using namespace std;
#define int long long 
int n , m , x[200005] , cnt , ans;
bool vis[200005] , sta;
signed main()
{
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> x[i];
	}
	for(int i = 30;i >= 0;i--)
	{
		cnt = 0;
		for(int j = 1;j <= n;j++)
		{
			if(!vis[j] && (x[j] & (1 << i)))
			{
				cnt++;
			}
		}
		if(cnt >= m)
		{
			ans += (1 << i);
			for(int j = 1;j <= n;j++)
			{
				if(!(x[j] & (1 << i)))
				{
					vis[j] = 1;
				}
			}
		}
	}
	cout << ans;
	return 0;
}