#include <iostream>
#include <stack>
#include <cstring>
#include <string>
using namespace std;

const int N = 5e5 + 10, M = 3e5 + 10;
int a[N], ans[M];

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	int cur = 0;
	while (n--)
	{
		++cur;
		stack<int> st;
		bool vis[m + 1];
		for (int i = 1; i <= m; i++) vis[i] = false;
		for (int i = cur; i <= n; i++)
		{
			if (!vis[a[i]])
			{
				vis[a[i]] = true;
				st.push(a[i]);
			}
			else
			{
				while (!st.empty()) 
				{
					int t = st.top(); 
					vis[st.top()] = false;
					st.pop();
					if (t == a[i]) break;
				}
				st.push(a[i]);
				vis[a[i]] = true;
			}
		}
		while (!st.empty())
		{
			ans[st.top()]++;
			st.pop();
		}
	}
	for (int i = 1; i <= m; i++) cout << ans[i] << " ";
	cout << endl;
	return 0;
} 
