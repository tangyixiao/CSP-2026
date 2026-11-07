#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int n, m, ck[300010], ans[300010];
struct node
{
	int val, id;
}a[500010];
stack <node> st;

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].val;
		a[i].id = i;
	}
	for (int i = 1; i <= n; i++)
	{
		memset(ck, 0, sizeof ck);
		for (int j = i; j <= n; j++)
		{
			if (!ck[a[j].val])
			{
				ck[a[j].val]++;
				st.push(a[j]);
			}
			else
				while (st.top().val != a[j].val)
				{
					ck[st.top().val]--;
					st.pop();
				}
		}
		while (st.size())
		{
			ans[st.top().id]++;
			st.pop();
		}
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << ' ';
	return 0;
}
