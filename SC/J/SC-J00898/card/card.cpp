#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 2, M = 3e5 + 2;
int lan[N];
stack <int> game;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	vector <int> ans(m);
	for(int i = 1; i <= n; i++) cin >> lan[i];
	int nn = n;
	while(nn--) {
		vector <int> vis(m);
		for(int i = n - nn; i <= n; i++) {
			if(vis[lan[i]] == 0) {
				vis[lan[i]] = 1;
				game.push(lan[i]);
			} else {
				while(game.top() != lan[i]) game.pop();
				game.pop();
				game.push(lan[i]);
			}
		}
		while(!game.empty()){
			ans[game.top()]++;
			game.pop();
		}
	}
	for(int i = 1; i <= m; i++) cout << ans[i] << " ";
	return 0;
}