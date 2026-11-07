#include<bits/stdc++.h>
#define int long long
using namespace std;
constexpr int N = 5e5 + 66;
using ll = long long;
int a[N], n, m, vis[N], ans[N];
signed main()
{
	freopen("card.in", "r", stdin);freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++) cin >> a[i];
	for(int i = 1;i <= n;i ++)
	{
		stack<int> s;
		for(int j = i;j <= n;j ++)
		{
			if(!vis[a[j]]) s.push(a[j]), vis[a[j]] ++;
			else while(s.top() != a[j]) vis[s.top()] --, s.pop();
		}
		while(!s.empty()) vis[s.top()] --, ans[s.top()] ++, s.pop();
	}
	for(int i = 1;i <= m;i ++) 
	{
		cout << ans[i];
		if(i != m) cout << ' ';
	}
	return 0;
}
