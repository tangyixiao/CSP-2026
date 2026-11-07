#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+3;
bool f[30];
long long a[2 * N];
int b[2 * N];
int head = 1, tail = 0;
long long m;
int sum = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	char o;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> m >> o;
		if (f[o - 'a' + 1] == 0) {
			sum++;
		}
		f[o - 'a' + 1] = 1;
		a[i] = m;
		b[i] = o - 'a' + 1;
	}
	tail = n;
	if (sum == 1) {
		printf("0");
		return 0;
	}
	long long ans = 0;
	while (tail - head >= 1) {
		if (b[head] != b[tail]) {
			if (a[head] <= a[tail]) {
				ans += a[head];
				b[head] = b[tail];
			} else {
				if (a[head] > a[tail]) {
					ans += a[tail];
					b[tail] = b[head];
				}
			}
		}
		if (b[head] == b[tail]) {
			if (a[head] < a[tail]) {
				a[tail] -= a[head];
				head++;
			} else {
				if (a[head] > a[tail]) {
					a[head] -= a[tail];
					tail--;
				} else {
					head++;
					tail--;
				}
			}
		}
	}
	printf("%lld", ans);
	return 0;
}
