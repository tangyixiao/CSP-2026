#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
const int N = 500005;
int n, m, a[N], ans[N];
bool vis[N];
stack <int> st;
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++)
		cin >> a[i];
	for(int k = 1 ; k <= n ; k++)
	{
		memset(vis, false, sizeof(vis));
		for(int i = k ; i <= n ; i++)
		{
			if(vis[a[i]] == false)
			{
				st.push(a[i]);
				vis[a[i]] = true;
			}
			else
			{
				while(st.top() != a[i])
				{
					vis[st.top()] = false;
					st.pop();
				}
			}
		}
		while(!st.empty())
		{
			ans[st.top()]++;
			st.pop();
		}
	}
	for(int i = 1 ; i <= m ; i++)
	{
		cout << ans[i] << " ";
	}
	return 0;
}
