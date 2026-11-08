#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 2e5 + 5;

int n, m;
int a[N];
bitset<32> b[N];
bool vis[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i] = a[i];
		vis[i] = 1;
//		cout << b[i] << endl;
	}
	int ans = 0;
	int cnttt = 30;
	while (1) {
		vector<int> v;
		bool f = 0;
		for (int i = cnttt; i >= 0; i--) {
			int cnt = 0;
			for (int j = 1; j <= n; j++) {
				if (b[j][i] == 1 && vis[j]) {
//					cerr << j << " ";
					cnt++;
				}
			}
			if (cnt >= m) {
				cnttt = i - 1;
				ans += (1 << i);
//				cout << i << endl;
				for (int j = 1; j <= n; j++) {
					if (b[j][i] == 1 && vis[j]) {
						v.push_back(j);
					}
				}
				f = 1;
				break;
			}
		}
//		cerr << endl;
		if (!f) break;
		memset(vis, 0, sizeof(vis));
		for (int x : v) {
//			cerr << x << end	l;
			vis[x] = 1;
		}
	}
	cout << ans;
	return 0; 
}
