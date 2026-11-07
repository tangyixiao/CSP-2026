#include <bits/stdc++.h>
using namespace std;

long long n, m, x, f[35] = {1, 1}, sum;
vector<long long> v[35];
map<long long, long long> mmap;
int main() {

	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	cin >> n >> m;
	for (long long i = 2; i <= 31; i++) {
		f[i] = f[i - 1] * 2;
	}
	for (long long i = 1; i <= n; i++) {
		cin >> x;
		for (int j = 31; j >= 1; j--) {
			if (x >= f[j]) {
				mmap[j]++;
				v[j].push_back(x);
				x -= f[j];
			}
		}
	}
	for (long long i = 31; i >= 1; i--) {
		if (mmap[i] >= m) {
			stable_sort(v[i].begin(), v[i].end());
			sum = v[i][v[i].size() - 1];
			for (long long k = 0; k < v[i].size(); k++) {
				if (k >= v[i].size() - m)
					sum = sum & v[i][k];
			}
			cout << sum;
			return 0;
		}
	}

	return 0;
}