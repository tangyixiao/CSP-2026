#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n;
long long a[200005];
char c[200005];
long long p1, p2;
long long ans;
long long sum;

string s1;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> c[i];
		sum += a[i];
	}
	if (sum <= 1000000000) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < a[i]; j++) {
				s1 += c[i];
			}
		}
		for (long long i = 0; i < sum / 2; i++) {
			if (s1[i] != s1[sum - i - 1])
				ans++;
		}
	} else {
		p2 = sum - 1;
		for (int i = 0, j = n - 1; i < n && i < j && p1 <= sum / 2;) {
			int tmp_min = min(a[i], a[n - i - 1]);
			if (c[i] != c[n - i - 1] && !(p1 <= sum && p1 + tmp_min >= sum)) {
				if (ans <= sum / 2)
					ans += tmp_min;
				p1 += tmp_min;
				p2 -= tmp_min;
			}
			if (tmp_min == a[i] && tmp_min == a[n - i - 1]) {
				i++, j--;
			} else if (tmp_min == a[i])
				i++;
			else
				j--;
		}
	}
	cout << ans;
	return 0;
}