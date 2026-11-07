#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int sum[40];
vector<int> aaa[N];
vector<int> nonono[40];
bool nouse[N];
bool haveuse[40];
int csum[40];//cannotusesum

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, a;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		for (int j = 30; j >= 0; j--) {
			if (a & (1 << j)) {
				sum[j] += 1;
				aaa[i].push_back(j);
			} else
				nonono[j].push_back(i);
		}
	}
	int ans = 0;
	for (int i = 30; i >= 0; i--) {
		memset(csum, 0, sizeof(csum));
		if (sum[i] >= m) {
			bool bbb = 1;
			for (int j : nonono[i]) {
				if (nouse[j])
					continue;
				for (int k : aaa[j]) {
					csum[k] += 1;
				}
			}
			for (int j = 30; j > i; j--) {
				if (haveuse[j] && sum[j] - csum[j] < m) {
					bbb = 0;
				}
			}
			if (bbb) {
				ans += (1 << i);
				haveuse[i] = 1;
				for (int j : nonono[i]) {
					if (nouse[j])
						continue;
					nouse[j] = 1;
					for (int k : aaa[j]) {
						sum[k] -= 1;
					}
				}
			}

		}
	}
	cout << ans;
	return 0;
}
