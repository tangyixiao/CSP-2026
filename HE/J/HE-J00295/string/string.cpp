#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n;
int a[N];
char s[N];
string S;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> s[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= a[i]; j++) {
			S += s[i];
		}
	}
	int len = S.size();
	int cnt = 0;
	for (int i = 0; i < len / 2; i++) {
		if (S[i] != S[len - 1 - i]) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
} 
