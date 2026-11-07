#include <iostream>
#include <stack>
using namespace std;
int n, m;
int a[5005];
int cnt[3005];
bool f[3005];
stack<int> st;
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)	cin >> a[i];
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			if (f[a[j]])
			{
				while (st.top() != a[j])
				{
					f[st.top()] = false;
					st.pop();
				}
			}
			else
			{
				f[a[j]] = true;
				st.push(a[j]);
			}
		}
		while (!st.empty())
		{
			cnt[st.top()]++;
			f[st.top()] = false;
			st.pop();
		}
	}
	for (int i = 1; i <= m; i++)
		cout << cnt[i] << " ";
	return 0;
}
