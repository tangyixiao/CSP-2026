#include <iostream>
#include <set>
#include <map>
#include <algorithm>
long long n, m;
std::set <long long> g;
long long binary[300001][41];
long long cnt[41];
long long pow(long long a, long long b) {
	long long res = 1;
	while (b > 0) {
		if (b & 1) res *= a;
		a *= a;
		b >>= 1;
	}
	return res;
} 
void Init(long long a, long long k) {
	for (long long i = 40; i >= 0; i--) {
		long long current = pow(2, i);
		if (current <= a) {
			a -= current;
			binary[k][i] = 1;
			cnt[i]++;
		}
	}
}
long long Solve() {
	long long i = 40;
	while (i >= 0) {
		long long cnt = 0;
		for (long long j = 1; j <= n; j++) {
			cnt += binary[j][i]; 
		}
		if (cnt >= m) break; 
		i--;
	}
	long long res = 0;
	for (; i >= 0; i--) {
		std::set <int> s;
		for (auto t : g) {
			if (!binary[t][i]) {
				s.insert(t);
			}
		}
		for (auto t : s) {
			g.erase(t);
		}
		long long cnt = 0;
		for (auto j : g) {
			cnt += binary[j][i];
		}
		if (cnt < m) return res;
		res += pow(2, i);
	}
	return res;
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	std::cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		long long a;
		std::cin >> a;
		Init(a, i);
		g.insert(i);
	}
	std::cout << Solve() << "\n";
	return 0;
}
