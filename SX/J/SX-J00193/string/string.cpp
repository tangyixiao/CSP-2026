//2.string
#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5;
long long a[N];
string s1, s2, ss, sss;
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long n, sum = 0, cnt = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		if (c[i] == c[i - 1])
			continue;
		else
			cnt++;
		sum += a[i];
		for (int j = sum + 1; j <= a[i] + sum; j++)
			s1[j] = c[i];
	}
	if (cnt == 0) {
		cout << 0;
		return 0;
	}
	long long num = 0;
	for (int i = 0; i < sum / 2; i++) {
		ss[i] = s1[sum - i];
		sss[i] = s1[i];
	}
	for (int i = 0; i < sum / 2; i++) {
		if (ss[i] == sss[i])
			num = num;
		else
			num++;
	}
	cout << num;
	return 0;
}
