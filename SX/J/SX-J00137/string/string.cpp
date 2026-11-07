#include <bits/stdc++.h>
using namespace std;
int n;
int num[200005];
string s;
long long sum;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
		cin >> s[i];
	}
	int l = 1, r = n;
	while (l < r) {
		int temp = min(num[l], num[r]);
		if (s[l] != s[r])
			sum += temp;
		num[l] -= temp, num[r] -= temp;
		if (num[l] == 0)
			l++;
		if (num[r] == 0)
			r--;
	}
	cout << sum;
	return 0;
}
