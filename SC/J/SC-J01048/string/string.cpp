#include <bits/stdc++.h>
using namespace std;
int n, m = 0, cnt = 0, k = 0, d[200];
long long a[200005], b[200005], sum = 0;
char c[200005], e[200005];
void hb(int x) { //合并相邻c[i]
	k = x;
	for (int i = 2; i <= n; i++) {
		if (c[i] == c[i - 1]) {
			a[i] += a[i - 1];
			a[i - 1] = 0;
			k--;
		}
	}
	int l = 1;
	for (int i = 1; i <= n; i++) {
		if (a[i]) {
			b[l] = a[i];
			e[l] = c[i];
			l++;
		}
	}
}
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		if (a[i] == a[i - 1]) cnt++;
	}
	if (cnt == n - 1) {
		int maxx = 0;
		for (int i = 1; i <= n; i++) {
			d[(int)c[i]]++;
		}
		for (int i = 97; i <= 122; i++) {
			maxx = max(maxx, d[i]);
		}
		cout << n - maxx;
		return 0;
	}
	hb(n);
	if (k == 1) {
		cout << 0;
		return 0;
	}
	//争一把
	if (k % 2 == 0) { 
		m = k / 2;
		//先把中间改了——>奇数
		sum += min (b[m], b[m+1]);
		b[m] += b[m+1];
		b[m+1] = 0;
	}
	m = k / 2;
	for (int i = 1; i <= m; i++) { //倒着 1 1 对应
		sum += abs(b[i] - b[k - i + 1]);
		b[i + 1] += abs(b[i] - b[k - i + 1]);
	}
	cout << sum;
	return  0;
}