#include <bits/stdc++.h>
using namespace std;

#define DEBUG
#define LOCAL

typedef long long int ll;
typedef pair<char, int> PCI;

inline void solve() {
	int n;
	cin >> n;
	
	vector<PCI> a(n + 1);
	stack<PCI> st;
	ll sum = 0;
	
	for (int i = 1; i <= n; i ++) {
		cin >> a[i].second >> a[i].first;
		sum += a[i].second;
		st.push(a[i]);
	}
	
	ll mid = sum / 2;
	ll cnt = 0;
	ll ans = 0;
	
	for (int i = 1; i <= n; i ++) {
		if (cnt > mid) break;
		if (cnt + a[i].second <= mid) {
			int need = a[i].second;
			while (need > 0 && !st.empty()) {
				int u = st.top().second;
				char c = st.top().first;
				
				if (need - u >= 0) {
					need -= u;
					if (c != a[i].first) ans += u;
					st.pop();
				} else {
					st.pop();
					if (c != a[i].first) ans += need;
					st.push(make_pair(c, u - need));
					need = 0;
				}
			}
			
			cnt += a[i].second;
		} else {
			int need = mid - cnt;
			while (need > 0 && !st.empty()) {
				int u = st.top().second;
				char c = st.top().first;
				
				if (need - u >= 0) {
					need -= u;
					if (c != a[i].first) ans += u;
					st.pop();
				} else {
					need = 0;
					st.pop();
					if (c != a[i].first) ans += u - need;
					st.push(make_pair(c, u - need));
				}
			}
			
			cnt += a[i].second;			
		}
	}
	
	cout << ans << "\n";
}

int main(int argc, const char* argv[]) {
#ifdef LOCAL
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
#endif
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t = 1;
//	cin >> t;
	
	while (t --) {
		solve();
	}
	
	return 0;
} 
