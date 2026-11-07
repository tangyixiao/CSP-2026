#include<bits/stdc++.h>
using namespace std;
const int maxn = 500005, maxm = 300005;
int n, m;
int a[maxn], cnt[maxm];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);	
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; ++i)
	{
		scanf("%d", &a[i]); 
	}
	int vis[maxm];
	for(int i = 1; i <= n; ++i)
	{
		stack<int>st;
		memset(vis, 0, sizeof(vis));
		for(int j = i; j <= n; ++j)
		{
			if(vis[a[j]] == 1)
			{
				while(st.top() != a[j])
				{
					vis[st.top()] = 0;
					st.pop();
				}
			}
			else 
			{
				vis[a[j]] = 1;
				st.push(a[j]);
			}
		}
		while(!st.empty())
		{
			++cnt[st.top()];
			st.pop();
		}
	}
	for(int i = 1; i <= m; ++i)
	{
		printf("%d ", cnt[i]);
	}
	return 0;
}