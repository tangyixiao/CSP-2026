#include <bits/stdc++.h>
using namespace std;

int n, m, a[500010], ans[300010];
stack<int> st;
bool ap[300010];
void solve1()
{

	for (int i = 1; i <= n; i++)
	{
		memset(ap, 0, sizeof(ap));
		for (int j = i; j <= n; j++)
		{
			if(!ap[a[j]])
			{
				st.push(a[j]);
				ap[a[j]] = 1;
			}
			else
			{
				while(1)
				{
					if(st.top() == a[j])
						break;
					ap[st.top()] = 0;
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
	for (int i = 1; i <= m; i++)
		cout << ans[i] << ' ';
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	solve1();
	return 0;
}
