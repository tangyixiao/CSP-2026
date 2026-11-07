#include <bits/stdc++.h>

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	int n, m;
	std::cin >> n >> m;
	std::vector <int> a(n);
	for(int& i : a) {
		std::cin >> i;
	}
	std::vector <int> cnt(35, 0);
	for(int i : a) {
		for(int d = 30; d >= 0; d--) {
			if((i >> d) & 1) {
				cnt[d]++;
			}
		}
	}
	long long mx = (1ll << 31) - 1;
	for(int d = 30; d >= 0; d--) {
		if(cnt[d] < m) {
			mx >>= 1;
		} else {
			break;
		}
	}
	for(int& i : a) {
		i &= mx;
	}
	std::sort(a.begin(), a.end(), std::greater <int> ());
	int ans = a[0];
	for(int i = 0; i < m; i++) {
		ans &= a[i];
	}
	std::cout << ans;
	return 0;
}