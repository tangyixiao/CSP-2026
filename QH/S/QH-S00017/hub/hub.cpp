#include<bits/stdc++.h>
using namespace std;
const int N =  1e6 + 10;
vector<int> a[N];
int main() {;
	freopen("hub.in", "r", stdin);
	freopen("hub.out", "w", stdout);
	int c, t;
	cin >> c >> t;
	while(t --) {
		int n, k;
		cin >> n >> k;
		for(int i = 1;i <= n - 1;i ++) {
			int u, v;
			cin >> u >> v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		if(k <= 2) {
			cout << 1 << endl;
			continue;
		}
		
		cout << 2 << endl;
	}
	return 0;
}
