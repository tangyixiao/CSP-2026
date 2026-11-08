#include <bits/stdc++.h>
using namespace std;
const int N = 2e6 + 10;
int a[N];
struct e{
	int v, dis;
};
e dp[N];
int n , d;
void print() {
	for(int i = 1; i <= n; i ++) {
		cout << dp[i].v << ' ' << dp[i].dis << endl;
	}
	cout << endl;
	return ;
}
int dis[N];
int vis[N];
void dij(){
	priority_queue<pair<int, int>, vector<pair<int, int > >, greater<pair<int, int> > > q;
	q.push({1, 0});
	dis[1] = 1;
	while(!q.empty()) {
		pair<int, int > _ = q.top();
		q.pop();
		int u = _.second;
		int w = _.first;
		if(vis[u] == 1) {
			continue;
		}
		vis[u] = 1;
		for(int i = 1;i <= d;i ++) {
			int nowi = i + u;
			int val = a[i];
			if(dp[nowi].dis < dp[u].dis + val) {
				dp[nowi].dis = dp[u].dis + val;
				q.push({dp[nowi].dis, nowi});
			}
		}
	}
}
int main() {
	freopen("migrate.in", "r", stdin);
	freopen("migrate.out", "w", stdout);
	int c, t;
	cin >> c >> t;
	while(t --) {
		cin >> n >> d;
		for(int i = 1; i <= n; i ++) {
			cin >> a[i];
			dp[i].v = 0;
			dp[i].dis = INT_MAX; 
		}
		dij();
		sort(a + 1, a + n + 1);
		for(int i = 1; i <= n; i ++) {
			for(int j = i + 1; j <= n; j ++) {
				if(a[j] - a[i] <= d && dp[j].dis == dp[i].v + 1) {
					dp[j].v = dp[i].v + 1;
				}
			}
		}
//		print();
		int cnt = 0;
		for(int i = 1; i <= n; i ++) {
			if(dp[i].v == 2) {
				cnt ++;
			}
		}
		
		cout << cnt << endl;
	}

	return 0;
}
