#include <bits/stdc++.h>
using namespace std;
const int N = 10000005;
long long n, m;
int a[N];
int cnt[N];

int main() {
	long long num;
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		int num_1 = 0;
		for (int j = i + 1; j < n; j++) {
			cnt[num_1] = a[i] & a[j];
			num_1++;
		}
	}
	for (int i = 0; i <= n; i++) {
		if (cnt[i] < cnt[i + 1]) {
			num = cnt[i + 1];
		}
	}
	cout << num;
	return 0;
}
