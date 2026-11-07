#include <bits/stdc++.h>
using namespace std;
int n, m, a[200001], ans[40];
vector<int> vec[31];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		vec[30].push_back(i);
	}
	memset(ans, 0, sizeof(ans));
	for (int i = 30; i >= 0; i--) {
		int sum = 0, s = vec[i].size();
		for (int j = 0; j < s; j++) {
			if ((a[vec[i][j]] >> i) % 2 == 1) {
				sum++;
			}
		}
		if (sum >= m) {
			ans[i] = 1;
			for (int j = 0; j < s; j++) {
				if ((a[vec[i][j]] >> i) % 2 == 1) {
					vec[i - 1].push_back(vec[i][j]);
				}
			}
		} else {

			for (int j = 0; j < s; j++) {
				vec[i - 1].push_back(vec[i][j]);
			}
		}
	}
	int answer = 0;
	for (int i = 0; i <= 30; i++) {
		answer += pow(2, i) * ans[i];
	}
	cout << answer;
	return 0;
}
