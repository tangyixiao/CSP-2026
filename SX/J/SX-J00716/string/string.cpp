#include <bits/stdc++.h>
using namespace std;
const int N = 1e9+100;
char a1[N];
long long cnt[N], a[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	long long y, p;
	char s;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> y >> s;
		a[i] = y + a[i - 1];
		p += y;
		for (int j = 1; j <= a[i]; j++) {
			cnt[s - 'a' + 1]++;
			a1[j] = s;
		}
	}
//	long long z = 0;
//	for (int i = 1; i <= p; i++) {
//		if (a1[i] != a1[p - i + 1]) {
//			if (cnt[a1[i] - 'a' + 1] > cnt[a1[p - i + 1] - 'a' + 1]) {
//				a1[p - i + 1] = a1[i];
//				cnt[a1[p - i + 1] - 'a' + 1]--;
//				z++;
//			}
//			if (cnt[a1[i] - 'a' + 1] < cnt[a1[p - i + 1] - 'a' + 1]) {
//				a1[i] = a1[p - i + 1];
//				cnt[a1[i] - 'a' + 1]--;
//				z++;
//			}
//		}
//	}
	cout << 0;
	return 0;

//	cout << z;
}
