#define pii pair<int,int>
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

vector< vector<pii> > g;
priority_queue< pii, vector<pii> , greater<pii> >pq;
int w[505],dist[500005];
bool done[500005];

void dijkstra(int s,int n,int e)
{
	memset(dist,0x3f,sizeof(dist));
	memset(done,0,sizeof(done));
	while(!pq.empty())pq.pop();
	pq.push((pii){s,0});
	dist[s]=0;
	
	while(!pq.empty())
	{
		int u=(pq.top()).first;
		int d=(pq.top()).second;
		//auto[d,u]=pq.front();
		pq.pop();
		if(done[d])continue;
		done[d]=true;
		if(u==e)return;
		for(int i=0;i<g[u].size();i++)
		{
			int v=g[u][i].first;
			int w=g[u][i].second;
			if(dist[v]>dist[u]+w)
			{
				dist[v]=dist[u]+w;
				pq.push((pii){v,dist[v]});
			}
		}
	}
}
int main()
{
	freopen("subway.in", "r", stdin);
	freopen("subway.out", "w", stdout);
	int c,n,m,d,u1,u2,t1,t2,q,k,x;
	cin >> c >> n >> m >> d >> q;
	g.resize(500005);
	for(int i=1;i<=m;i++)
	{
		cin >> w[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		cin >> k;
		for(int j=1;j<=k;j++)
		{
			if(j>=2)
			{
				cin >> u2 >> t2;
//				g[u1][u2]=min(t1+t2,g[u1][u2]);
//				g[u2][u1]=min(t1+t2,g[u1][u2]);
				g[u1].push_back((pii){u2,t1+t2});
				g[u2].push_back((pii){u1,t1+t2});
				u1=u2,t1=t2;
			}
			else
			{
				cin >> u1 >> t1;
			}
		}
	}
	int s,e;
	while(q--)
	{
		cin >> s >> e;
		dijkstra(s,n,e);
		cout << dist[e]+w[s]+w[e] << '\n';
	}
	return 0;
 	/*
0 3 7 20 2
8 3 6 1 7 2 9
3 1 4 2 5 5 100
3 2 6 3 1 7 2
4 3 2 5 100 4 6 6 7
1 6
2 3

*/
/*
0 2 5 20 2
4 1 9 2 5
3 1 5 2 7 4 6
3 2 3 3 4 5 7
1 3
1 2
*/
}
