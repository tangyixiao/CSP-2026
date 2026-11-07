#include <bits/stdc++.h>
using namespace std;

string str = "";
int n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a;
		char c;
		cin >> a >> c;
		for (int j = 1; j <= a; j++) {
			str += c;
		}
	}
	long long cnt = 0;
	int fix;
	if ((int)str.size() % 2 == 1) {
		fix = 1;
	} else {
		fix = 0;
	}
	for (int i = 0; (i + 1) * 2 <= (int)str.size() - fix; i++) {
		if (str[i] != str[(int)str.size() - i - 1]) {
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}