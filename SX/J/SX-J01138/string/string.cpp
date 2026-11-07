#include <bits/stdc++.h>
using namespace std;

struct a {
	char zm;
	int sm;
};
int n, y;
char x;
long long l, sum = 0;
bool zj = true;
vector<a> p;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "r", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> y >> x;
		p.push_back({x, y});
		l += y;
	}
	int mid = n / 2 + 1;
	for (auto it : p) {
		if (it != p[0].zm) {
			zj = false;
			break;
		}
	}
	if (zj) {
		cout << 0;
	} else {

	}
	return 0;
}
