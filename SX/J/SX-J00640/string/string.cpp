#include <bits/stdc++.h>
using namespace std;

int n;

struct huiwen {
	int a;
	string c;
} chuan[100010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> chuan[i].a >> chuan[i].c;
	}
	int num = 0;
	for (int i = 1; i <= n - 1; i++) {
		if (chuan[i].c == chuan[i + 1].c) {
			num++;
		}
	}
	if (num + 1 == n) {
		cout << 0;
		return 0;
	}
	return 0;
}