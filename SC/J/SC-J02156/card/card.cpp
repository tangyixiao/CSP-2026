#include <bits/stdc++.h>
#include <stack>

using namespace std;

const int Maxn = 5e5 + 5;
int a[Maxn], ans[Maxn];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	
	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	
	for (int i = 1; i <= n; i++) {
		stack<int> p;
		int io[Maxn]; memset(io, 0, sizeof(io));
		for (int now = i; now <= n; now++) {
			if (p.empty() || !io[a[now]]) {
				p.push(a[now]); io[a[now]] = 1;
			} else {
				while (p.top() != a[now]) {
					io[p.top()] = 0; p.pop();
				}
			}
		}
		while (!p.empty()) {
			ans[p.top()]++; p.pop();
		}
	}
	
	for (int i = 1; i <= m; i++)
		cout << ans[i] << " ";
	
	return 0;
}