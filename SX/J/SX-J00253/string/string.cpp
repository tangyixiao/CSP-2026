#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
string s;
long long n, a1[N], k, sum, cnt1;
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a1[i] >> c[i];
		sum += a1[i];
		s += c[i];
	}
	long long mid = ceil(sum / 2);
	int l = s.size();
	for (int i = l - 1; i >= 0; i--) {
		if (s[i] != s[k]) {
			if (a1[i] > a1[k + 1]) {
				cnt1 += a1[k + 1];
				a1[i] -= a1[k + 1];
				i++;

			} else if (a1[i] < a1[k + 1]) {
				cnt1 += a1[i];
				a1[k + 1] -= a1[i];
				k--;
			} else {
				cnt1 += a1[k + 1];
			}
		} else if (s[i] == s[k]) {
			if (a1[i] > a1[k + 1]) {
				a1[i] -= a1[k + 1];
				i++;
			} else if (a1[i] < a1[k + 1]) {
				a1[k + 1] -= a1[i];
				k--;
			}
		}
		if (cnt1 > mid) {
			cnt1 = mid;
			break;
		}
		if (i == k) {
			break;
		}
		k++;
	}
	cout << cnt1;
	return 0;
}
