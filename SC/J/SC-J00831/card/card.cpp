#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int N = 5e5 + 3, M = 3e5+3;
int n, m;
int dp[N];
int a[N];
int last[M];
int turn[N];
int cnt[M];
bitset<203> vis;
void solve1() {
	vector<int> stk;
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (!vis[a[j]]) {
				stk.push_back(a[j]);
				vis[a[j]] = 1;
				continue;
			}
			
			while (!stk.empty() && stk.back() != a[j]) {
				vis[stk.back()] = 0;
				stk.pop_back();
				
			} 
			vis[a[j]] = 1;
		}
		
		while (!stk.empty()) {
			int x = stk.back();
			if (vis[x]) cnt[x]++, vis[x] = 0;
			stk.pop_back();
 		}
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i] << ' ';
	} 
}

void solve2() {
//	cout << 111;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		dp[i] = 1; 
	}
	for (int i = n; i >= 1; i--) {
		turn[i] = last[a[i]];
		last[a[i]] = i;
	}
	for (int i = 1; i <= n; i++) {
		dp[turn[i]] += dp[i];
		if (!turn[i]) dp[i+1] += dp[i];
	} 
	for (int i = 1; i <= n; i++) {
		if (!turn[i]) cnt[a[i]] = dp[i];
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i] << ' ';
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n>> m;
	if (n <= 500 && m <= 200) {
		solve1();
		return 0;
	}
	solve2();
	return 0;
}
// i forgot the time. i checked my code ahead, and now i just found i still have 1.3 hours.
// come on! 
// These time can be used to think about the 100pts idea of T4?
// it seems to i got 300pts in T1-T3. unbelievable!
