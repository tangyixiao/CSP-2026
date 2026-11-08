#include<bits/stdc++.h>
#define ls (x << 1)
#define rs (x << 1 | 1)
#define PR pair<int, int>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
const int N = 5e5 + 5;
const db EPS = 1e-6;
const int MOD = 998244353;
const ull P = 33550337;

int n, m, a[N], ed[N], sz[N], ans[N], lst[N], Last[N];
vector<int> res[N];
bool t[N], tt[N];

inline void init() {
	for (int i = n; i >= 1; i--) {
		if (!Last[a[i]]) Last[a[i]] = i;
		else {
			lst[Last[a[i]]] = i;
			Last[a[i]] = i;
		}
	}
	return;
}

int main() {
	
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
	
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	int nd = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i - nd];
//		if (a[i - nd] == a[i - nd - 1]) nd++;
	}
	n -= nd;
	
	init();
	
	for (int i = n; i >= 1; i--) {
		if (!tt[a[i]]) {
			tt[a[i]] = 1;
			int u = i;
			stack<int> stk;
			for (int i = u; i <= n; i++) {
				while (t[a[i]] && !stk.empty()) {
					if (stk.top() != a[i]) {
						t[stk.top()] = 0;
						stk.pop();
					} else {
						stk.pop();
						break;
					}
				}
				stk.push(a[i]);
				t[a[i]] = 1;
			}
			while (!stk.empty()) {
				res[a[i]].push_back(stk.top());
				t[stk.top()] = 0;
				stk.pop();
			}
		}
	}
	
	for (int i = 1; i <= n; i++) {
		sz[a[i]]++;
	}
	
	for (int i = 1; i <= m; i++) {
		for (int num : res[i]) {
			ans[num] += sz[i];
		}
	}
	
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	
	return 0;
}
