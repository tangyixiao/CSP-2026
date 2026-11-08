#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
const int M = 3e5 + 5;

stack<int> st;

int a, b, c, d, e, f, g[N], h[M], ans[M];

bool vis[N];

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> a >> b;
	for(int i = 1; i <= a; i ++) 
	{
		cin >> g[i];
		if(g[i] < g[i - 1]) f = 1;
	}
	if(f == 0) // 7 8 9 20
	{
		int la = 0;
		for(int i = 1; i <= a; i ++)
		{
			if(g[i] == g[i - 1]) h[g[i]] ++;
			else h[g[i]] = i;
		}
		for(int i = 1;i <= b; i ++) cout << h[i] << ' ';
		return 0;
	}
	for(int k = 1; k <= a; k ++)
	{
		memset(vis, 0, sizeof(vis));
		for(int i = 1; i <= st.size(); i ++) st.pop();
		for(int i = k; i <= a; i ++) 
		{
			if(vis[g[i]] == 1)
			{
				while(! st.empty())
				{
					if(st.top() == g[i]) break;
					vis[st.top()] = 0;
					st.pop();
				} 
			}
			else 
			{
				st.push(g[i]);
				vis[g[i]] = 1;
			}
		}
		for(int i = 1; i <= b; i ++) 
		{
			if(vis[i] == 1) ans[i] ++;
		}
	}
	for(int i = 1; i <= b; i ++) cout << ans[i] << ' ';
	return 0;
}

