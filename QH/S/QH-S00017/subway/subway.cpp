#include <bits/stdc++.h>
using namespace std;
const int N  = 1010;
int w[N];
vector<pair<int, int> > a[N];
int dis[N];
int vis[N];
int c, n, m, d, q;
void dij() {
	priority_queue<pair<int, int> , vector<pair<int, int > > , greater<pair<int ,int > > > q;
	dis[1] = 0; 
	q.push({1, 0});
	while(!q.empty()) {
		pair<int, int> _1 = q.top();q.pop();
		int now = _1.second;
		for(pair<int, int > _ : a[now]){
			int to = _.first;
			int val = _.second;
			if(dis[to] < dis[now] + val) {
				dis[now] = dis[to] + val;
				q.push({dis[now], to});
			}
		}
	}
}
int main() {
	freopen("subway.in", "r", stdin);
	freopen("subway.out", "w", stdout);
	
	cin >> c >> n >> m >> d >> q;
	for(int i = 1; i <= m; i ++) {
		cin >> w[i];
		return 0;
	}
	for(int i = 1; i <= n; i ++) {
		int k;
		cin >> k;
		for(int j = 1; j <= k; j ++) {
			int u, val;
			cin >> u >> val;
			a[i].push_back({u, val});
			a[u].puah_back({i, val});
		}
	}
	dij();
	for(int i = 1;i <= q;i ++) {
		int x,y;
		cin >> x >> y;
		cout << dis[y]; 
	}
	return 0; 
}
