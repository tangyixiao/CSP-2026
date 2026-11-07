#include <bits/stdc++.h>
using namespace std;
char num[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, q, cnt = 0, ans = 0;
	long long l = 1;
	cin >> n;
	while (n != 0) {
		long long m;
		char a;
		cnt++;
		cin >> m >> a;
		if (cnt == 1) {
			for (int i = 1; i <= m; i++)
				num[i] = a;
		} else {
			for (int i = l; i <= l + m - 1; i++)
				num[i] = a;
		}
		n -= 1;
		l = 1 + m;
	}
	bool flag = 0;
	while (!flag) {
		for (int i = 1; i <= 200005; i++) {
			if (num[i] != 0)
				q++;
			else
				flag = 1;
		}
	}
	for (int i = 1; i <= (q + 1) / 2; i++) {
		if (num[i] == num[q + 1 - i])
			ans++;
	}
	if (ans == (q + 1) / 2)
		cout << "0";
	else
		cout << (q + 1) / 2 - ans;
	return 0;
}
