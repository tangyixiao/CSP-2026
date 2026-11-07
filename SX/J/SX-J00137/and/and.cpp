#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;
ll maxx = -1e18;
int arr[200005];
int a[200005];

void dfs(int step, ll sum, int val) {
	if (step == m) {
		sum = arr[a[0]];
		for (int i = 1; i < m; i++)
			sum &= arr[a[i]];
		maxx = max(maxx, sum);
		return ;
	}
	for (int i = val; i <= n; i++) {
		a[step] = i;
		dfs(step + 1, sum, i + 1);
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	if (n >= 1000) {
		sort(arr + 1, arr + n + 1);
		ll sum = 0;
		int num = 0;
		for (int i = n; i >= 1; i--) {
			if (arr[i] % 2 == 1) {
				if (sum == 0)
					sum = arr[i];
				else
					sum &= arr[i];
				num++;
			}
			if (num == m)
				break;
		}
		cout << sum;
		return 0;
	}
	dfs(0, 0, 1);
	cout << maxx << endl;
	return 0;
}
