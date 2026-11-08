#include <bits/stdc++.h>
using namespace std;
struct node{
	long long a;
	char s;
}a[200005];
long long n, cnt = 0, k = 0, ans = 0;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i].a >> a[i].s;
		cnt += a[i].a;
	}
	k = cnt / 2;
	string s1;
//	cout << k << ' ' << cnt;
	for (long long i = 1; i <= n; i++) {
//		cout << i << ' ';
		for (long long j = 1; j <= a[i].a; j++) {
			s1 += a[i].s;
//			cout << 1 << ' ';
		}
	}
//	cout << ' ' << s1 << ' ';
	for (long long i = 0; i < k; i++) {
		if (s1[i] != s1[cnt - i - 1]) {
			ans++;
		} 
	}
	cout << ans;
}
