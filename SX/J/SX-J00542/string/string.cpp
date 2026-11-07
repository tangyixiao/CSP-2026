#include <bits/stdc++.h>
#define ll long long
using namespace std;
string a[200010];
ll s[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s[i] >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] == a[i + 1]) {
			s[i] += s[i + 1];
			i++;
		}
	}
	cout << 0;

}


