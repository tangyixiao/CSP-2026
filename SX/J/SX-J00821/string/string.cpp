#include <bits/stdc++.h>
using namespace std;

long long tests = 1;

constexpr int N = 2e5 + 10;

int n;
long long ultraSize[N];
char ch[N];

long long superSize;

long long ans;
string s;

void case_() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> ultraSize[i] >> ch[i];
		for (int j = 1; j <= ultraSize[i]; j++) {
			s += ch[i];
		}
		superSize += ultraSize[i];
	}
	int cnt = 0;
	for (int i = 1; i <= superSize / 2; i++) {
		if (s[i - 1] != s[s.size() - i]) {
			cnt++;
		}
	}
	cout << cnt;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

//	cin >> tests;
	while (tests--) {
		case_();
	}

	return 0;
}