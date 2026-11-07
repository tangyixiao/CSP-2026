#include <iostream>
#include <cstring>
using ll = long long;
using namespace std;
constexpr int N = 5e5 + 10;
int a[N], loc[N], desk[N];
int ans[N];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; ++i) {
		memset(loc, 0, sizeof loc);
		memset(desk, 0, sizeof desk);
		int r = 0; // µ±Ç°ÇøÓò£º[1, r] 
		for (int j = i; j <= n; ++j) {
			if (loc[a[j]] == 0 || loc[a[j]] >= r) {
				loc[a[j]] = ++r, desk[r] = a[j];
//				printf("{Branch 1}, a[j]=%d, r=%d \n", a[j], r); 
			} else {
				r = loc[a[j]];
//				printf("{Branch 2}, a[j]=%d, r=%d \n", a[j], r);
			}
		}
		for (int i = 1; i <= r; ++i) ++ans[desk[i]];
		
//		cerr << "[DEBUG: ]";
//		for (int i = 1; i <= r; ++i) cerr << desk[i] << " ";
//		cerr << "\n";
	}
	for (int i = 1; i <= m; ++i) cout << ans[i] << " ";
	return 0;
}
