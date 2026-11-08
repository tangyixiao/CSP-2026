#include<bits/stdc++.h>
#define ls (x << 1)
#define rs (x << 1 | 1)
#define PR pair<int, int>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
const int N = 2e5 + 5;
const db EPS = 1e-6;
const int MOD = 998244353;
const ull P = 33550337;

int n, m, a[N];
bool ocp[N];// occupied 
int bitans[55];
ll ans;// technically, "int" is certainly enough... 

inline void calc(int bit) {
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (ocp[i]) continue;
		if ((a[i] >> bit) & 1) {
			cnt++;
		}
	}
	if (cnt < m) return;
	bitans[bit] = 1;
	for (int i = 1; i <= n; i++) {
		if (ocp[i]) continue;
		if (((a[i] >> bit) & 1) == 0) {
			ocp[i] = 1;
		}
	}
	return;
}

inline void buildans() {
	for (int i = N - 1; i >= 0; i--) {
		ans <<= 1;
		ans |= bitans[i];
	}
	return;
}

int main() {
	
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
	
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 30; i >= 0; i--) {
		calc(i);
	}
	buildans();
	
	cout << ans;
	
	return 0;
}
