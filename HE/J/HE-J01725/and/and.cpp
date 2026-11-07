#include <bits/stdc++.h>
using namespace std;
int a[1000000];
string b;
string c;
string f;
int yu(int d, int e) {
	int g1 = 0;
	while(d > 0) {
		b[g1] = (d % 2 + '0');
		d /= 2;
		g1++;
	}
	int g2 = 0;
		while(e > 0) {
		c[g2] = (e % 2 + '0');
		e /= 2;
		g2++;
	}
	for (int i = 0; i < max(g1, g2); i++) {
		if (b[i] == '1' && c[i] == '1') {
			f[i] = '1';
		}else {
			f[i] = '0';
		}
	}
	long long sum = 0;
	reverse(f.begin(), f.end());
	int len = max(g1, g2);
	for (int i = 0; i < len; i++) {
		sum = sum + (f[i] - '0') * pow(2, i);
	}
	return sum;
}
int main() {
freopen("and.in", "r", stdin);
freopen("and.out", "w", stdout);
int n;
int m;
cin >> n >> m;
for (int i = 0; i < n; i++) {
	cin >> a[i];
}
 int ma = 0;
 int s = 0;
for (int i = 0; i < n - m + 1;i++) {
	s = a[i];
	for (int j = i + 1; j < i + m; j++) {	
		s = yu(s, a[j]);
	}
	ma = max(ma, s);
}
cout << ma;
	return 0;
}
