#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int n, m;
int a[500010];
int cnt[300010];
stack<int> st;
int have[300010];

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			if (!have[a[j]])
			{
				st.push(a[j]);
				have[a[j]]++;
			}
			else
			{
				while(st.top() != a[j])
				{
					have[st.top()]--;
					st.pop();
				}
			}
		}
		
		memset(have, 0, sizeof have);
		
		while(!st.empty())
		{
			cnt[st.top()]++;
			st.pop();
		}
	}
	
	for (int i = 1; i <= m; i++)
	{
		cout << cnt[i] << " ";
	}
	cout << flush;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
