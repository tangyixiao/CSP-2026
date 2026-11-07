#include <bits/stdc++.h>
using namespace std;
int a[200005];
char b[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	string s = "";
	long long sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cin >> b[i];
		//sum+=a[i];
		for (int j = 1; j <= a[i]; j++) {
			s = s + b[i];
		}
	}
	for (int i = 0; i <= s.size() / 2 - 1; i++) {
		if (s[i] != s[i + (s.size() - 1) / 2 + 1])
			sum++;
	}
	cout << sum;
	return 0;
}
