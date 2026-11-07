#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5 + 10;
int n,m;
int a[N],b[N],cnt,cnt1;
int nxt[N],nw[N],num[N];
int ans[N];
bool vis[N];
queue<int> q;
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++)
	{
		cin >> a[i];
		num[a[i]] ++;
		if(a[i] != a[i - 1])
		{
			b[++ cnt] = a[i];
		}
	}
	for(int i = 1;i <= cnt;i ++)
	{
		nxt[nw[b[i]]] = i;
		nw[b[i]] = i;
	}
	for(int i = cnt;i >= 1;i --)
	{
		if(vis[b[i]])
		{
			continue;
		}
		vis[b[i]] = 1;
		cnt1 ++;
		int nw1 = i;
		while(nw1 <= cnt)
		{
			if(! nxt[nw1])
			{
				q.push(b[nw1]);
				nw1 ++;
			}
			else
			{
				nw1 = nxt[nw1];
			}
		}
		while(! q.empty())
		{
			ans[q.front()] += num[b[i]];
			q.pop();
		}
		if(cnt1 == m)
		{
			break;
		}
	}
	for(int i = 1;i <= m;i ++)
	{
		cout << ans[i] << ' ';
	}
	cout << '\n';
	return 0;
}
