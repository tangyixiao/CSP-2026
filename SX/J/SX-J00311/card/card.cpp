#include <bits/stdc++.h>
using namespace std;
int arr[500005], ans[300005], num[300005];
stack<int> table;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			num[j] = 0;
		}
		for (int j = i; j <= n; j++) {
			if (num[arr[j]] == 0) {
				table.push(arr[j]);
				num[arr[j]]++;
			} else {
				while (table.top() != arr[j]) {
					num[table.top()]--;
					table.pop();
				}
			}
		}
		while (!table.empty()) {
			ans[table.top()]++;
			table.pop();
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
}
