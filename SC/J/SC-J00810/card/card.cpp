#include<bits/stdc++.h>
using namespace std;
const int MAXN = 5e5 + 5, MAXM = 3e5 + 5;
int n, m, a[MAXN], s[MAXM], res, ans, last[MAXM]; 
int main ()
{
	freopen ("card.in", "r", stdin);
	freopen ("card.out", "w", stdout);
	cin >> n >> m;
	stack<int> st;
	for (int i = 1; i <= n; i ++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i ++)
	{
		for (int j = i; j <= n; j ++)
		{
			if (s[a[j]] != 0)
			{
				while (st.top() != a[j])
				{
					s[st.top()] = 0;
					st.pop();
				}
				s[st.top()] = 0;
				st.pop();
			}
			st.push(a[j]);
			s[a[j]] ++;
		}
		for (int j = 1; j <= m; j ++)
		{
			if (s[j] != 0)
			{
				last[j] ++;
			}
		}
	    memset(s, 0, sizeof(s));
	}
	for (int i = 1; i <= m; i ++)
	{
		cout << last[i] << " ";
	}
}