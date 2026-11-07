#include <iostream>
#include <algorithm>
#include <cstring>
#include <stack>
using namespace std;

int a[500010];
bool f[500010];
int cnt[500010];
int d[500010];
int s[500010];

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	bool flg = true;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if(a[i] < a[i - 1])	flg = false;
	}
	if(flg)
	{
		for(int i = 1;i <= n; i++)
		{
			d[a[i]]++;
		}
		for(int i = 1; i <= m; i++)
		{
			s[i] = s[i - 1] + d[i];
			cout << s[i] << " ";
		}
		return 0;
	}
	stack <int> st;
	for(int x = 1; x <= n; x++)
	{
		memset(f, true, sizeof f);
		for(int i = x; i <= n; i++)
		{
			if(f[a[i]])
			{
				f[a[i]] = false;
				st.push(a[i]);
			}
			else
			{
				while(st.top() != a[i])
				{
					f[st.top()] = true;
					st.pop();
				}
			}
		}
		while(!st.empty())
		{
			cnt[st.top()]++;
			st.pop();
		}
	}
	for(int i = 1; i <= m; i++)
	{
		cout << cnt[i] << " ";
	}
	return 0;
}
