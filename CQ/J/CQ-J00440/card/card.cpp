#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, m;
int a[100005];
int vis[100005];
signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++) {
		deque<int> q;
		for(int j = i; j <= n; j++) {
			bool fl = 0;
			for(int k = 0; k < q.size(); k++) {
				if(q[k] == a[j]) {
					fl = 1;
				} 
			}
			if(fl == 1) {
				while(!q.empty() && q.back() != a[j]) {
					q.pop_back();
				}
				q.pop_back();
			}
			q.push_back(a[j]);
		}
		for(int j = 0; j < q.size(); j++) {
			vis[q[j]]++;
		}
	}
	for(int i = 1; i <= m; i++) {
		cout << vis[i] << ' ';
	}
	return 0;
}

