#include <bits/stdc++.h>
using namespace std;
int n, m;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	int num[n + 5] = {}, answer = 0;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((num[i]&num[j] ) > answer) {
				answer = (num[i] & num[j]);
			}
		}
	}
	cout << answer;
	return 0;
}