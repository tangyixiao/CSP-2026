#include <bits/stdc++.h>
using namespace std;
int n;
int a;
char c;
long long s[130];
int x;
long long maxn = -1;
bool flag = 1;
long long sum = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		scanf("%d %c", &a, &c);
		x = int(c);
		s[x] += a;
	}
	for (int i = 97; i <= 122; i++) {
		maxn = max(maxn, s[i]);
		sum += s[i];
	}
	if (sum == maxn) {
		cout << "0" << endl;
		return 0;
	}
	cout << maxn << endl;
	return 0;
}
