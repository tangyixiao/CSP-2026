#include <bits/stdc++.h>
using namespace std;

vector<int> g;
int a[200010];
int n,m;
int cnt[200010];

//void dfs(int x,queue<int> g)
//{
//	for (int i = x;i <= n;i++)
//	{
//		queue<int> q = g;
//		queue<int> p;
//		while(q.front() != a[x])
//		{
//			p.push(q.front());
//			q.pop();
//		}
//		q = p;
//		cnt[a[x]]++;
//		q.push(a[x]);
//		dfs(x + 1,q);
//	}
//	
//}

//void bfs(int x)
//{
//	queue<int> q;
//	q.push(1);
//	dis[1] = 0;
//	cnt[1] = 0;
//	for (int i = 1;i <= )
//}

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
		cin >> a[i];
	queue<int> g;
	for (int i = 1;i <= m;i++)	
		cout << n - i << endl;
	return 0;
}
