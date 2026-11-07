#include <bits/stdc++.h>

using namespace std;

const int N = 5e5+10;
int a[N], LINK[N], ans[N];
vector <int> End[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, m;
	cin >> n >> m;
	
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	
	for (int i = n; i >= 0; --i) {
		if (LINK[a[i]] == 0) {
			for (int t : End[i+1]) {
				End[i].push_back(t);
			}
			End[i].push_back(a[i]);
			LINK[a[i]] = i;
		} else {
			for (int t : End[LINK[a[i]]]) {
				End[i].push_back(t);
			}
			LINK[a[i]] = i;
		}
	}
	
	for (int i = 1; i <= n; ++i) {
		for (int t : End[i]) {
			++ans[t];
		}
	}
	
	for (int i = 1; i <= m; ++i) {
		cout << ans[i] << " ";
	}
	cout << endl;
	
	return 0;
}