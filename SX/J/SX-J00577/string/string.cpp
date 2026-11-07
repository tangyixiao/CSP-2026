#include <bits/stdc++.h>
using namespace std;

const int N = 2 * 1e5 + 10;

struct zfc {
	long long q;
	char f;
} a[N];
string s;//总字符

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	long long sum = 0;//总长度
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].q >> a[i].f;
		sum += a[i].q;
		for (int j = 0; j < a[i].q; j++) {
			s += a[i].f;
		}
	}
	int num = 0;//修改次数
	for (int i = 0; i <= sum / 2 + 1; i++) {
		if (i == sum - i - 1) {
			break;
		}
		if (s[i] != s[sum - i - 1]) {
			num++;
		}
	}
	cout << num;
	return 0;
}