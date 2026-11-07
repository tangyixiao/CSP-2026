#include <bits/stdc++.h>
using namespace std;
int N;
string sl;
long long a;
string c;
long long ans;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> N;
	while (N--) {
		cin >> a >> c;
		while (a--) {
			sl += c;
		}
	}
	//cout << sl;
	//cout << sl.size();
	long long n = sl.size();
	for (long long i = 0; i < n / 2 + 1; i++) {
		if (sl[i] != sl[n - i - 1]) {
			ans++;
			//cout << sl[i] << " " << sl[n - i - 1] << "\n";
		}
	}
	cout << ans << "\n";
	return 0;
}