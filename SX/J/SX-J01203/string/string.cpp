#include <bits/stdc++.h>
using namespace std;
int n, m[200000], num;
string s;
char m[200000]
#define long long ans

int main() {
	freopen("sting.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long ans;
	int n;
	cin n;
	int h;
	cin h;
	for (int i = 0; i < n; i++) {
		cin >> h[i] >> m[i];
		num += h[j];
		for (int j = 0; j < h[i]; j++) {
			s += m[i];
		}
	}
	for (int i = 0; i < num / 2; i++) {
		if (s[i] != s[num - i - 1])
			ans++;
	}
	cout << ans;
	return 0;
}
