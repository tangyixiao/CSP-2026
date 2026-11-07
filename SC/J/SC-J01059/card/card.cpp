#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int N = 5e5+10;
const int M = 3e5 + 10;
int n, m;
int a[N], cnt[M];
bool vis[M];
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	memset(cnt, 0, sizeof(cnt));
	for(int i = 1; i <= n; i++)
	{
		int l[N];
		stack<int> stk;
		memset(l, 0, sizeof(l));
		memset(vis, false, sizeof(vis));
		for(int j = i; j <= n; j++)
		{
			if(!vis[a[j]])
			{
				stk.push(a[j]);
				vis[a[j]] = true;
				l[a[j]]=j;
			}
			else
			{
				for(int t = l[a[j]]; t < j; t++)
				{
					vis[stk.top()] = false;
					stk.pop();
				}
				vis[a[j]] = true;
				stk.push(a[j]);
				l[a[j]] = j;
			}
		}
		while(!stk.empty())
		{
			//cout << stk.top() << " ";
			cnt[stk.top()]++;
			stk.pop();
		}
		//cout << endl;
	}
	//cout << endl;
	for(int i = 1; i <=m; i++)
	{
		cout << cnt[i]<<" ";
	}
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
