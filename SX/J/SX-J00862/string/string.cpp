#include <bits\stdc++.h>
long long n, cnt;

using namespace std;

int main() {
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		cin >> s;
	}
	for (int i = 0; i < n; i += 2) {
		int j = n;
		j -= 2;
		if (s[i] - '0' == s[j - 1] - '0' && s[i + 1] == s[j]) {
			cnt += 0;
		} else if (s[i + 1] == s[j]) {
			long long a, b;
			a = s[i] - '0';
			b = s[j - 1] - '0';
			cnt += abs(a - b);
		} else {
			long long a, b;
			a = s[i] - '0';
			b = s[j - 1] - '0';
			cnt += min(a, b);
		}
	}
	cout << cnt;
	return 0;
}
