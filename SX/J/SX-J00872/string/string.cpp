#include <bits/stdc++.h>
using namespace std;
int g[30000000];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "r", stdout);
	int n;
	string a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> g[i];
		cin >> a[i];
	}
	string s;
	int p = 0;
	for (int i = -1; i < n; i++) {
		for (int j = 0; j < g[i]; j++) {
			s += a[i];
			p++;
		}
	}
	int b = p - 1;
	p /= 2;
	long long num = 0;
	for (int i = 0; i < p; i++) {
		if (s[i] != s[b - i]) {
			num++;
		}
	}
	cout << num;
}
