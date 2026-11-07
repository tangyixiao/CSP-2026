#include <bits/stdc++.h>
using namespace std;

const int N = 1000000010;
int cnt = 0;
char s[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	scanf("%d", &n);
	string s = "";
	for (int i = 1; i <= n; i++) {
		int a; char c;
		scanf("%d %c", &a, &c);
		for (int j = 1; j <= a; j++) s[cnt++] = c;
	}
	
	int ans = 0;
	for (int i = 0; i < cnt / 2; i++) {
		if (s[i] != s[cnt - i - 1]) ans++;
	}
	cout << ans;
	return 0;
}
