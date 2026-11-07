#include <bits/stdc++.h>
using namespace std;
string s, b, cnt;
int T, a, sum;
char c;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> T;
	while (T--) {
		cin >> a >> c;
		while (a--) {
			cnt += c;
			for (int i = cnt.size() - 1; i >= 0; i--) {
				b += cnt[i];
				if (b == cnt) {
					sum++;
				}
			}
		}
	}
	cout << sum;
	return 0;
}
