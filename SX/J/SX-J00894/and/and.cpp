#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl '\n'
int T = 1;
ll n, m, a[200005];
string s[200005];
int f[200005];
map<int, int> mp;

int andd(string s1, string s2) {
	int k = 1, sum = 0;
	int n = s1.size();
	int m = s2.size();
	for (int i = 0; i < min(n, m); i++) {
		if (s1[i] == '1' && s2[i] == '1') {
			sum += pow(2, k);
		}
	}
	return sum;
}

void solve() {
	cin >> n >> m;
	bool flag = true;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		s[i] = "";
		int y = a[i];
		mp[a[i]]++;
		while (y) {
			ll x = y % 2;
			y /= 2;
			s[i] += x + '0';
		}
		if (flag == true) {
			ll k = 0;
			while ((int)pow(2, k) < a[i]) {
				k++;
			}
			if ((int)pow(2, k) - 1  != a[i]) {
				flag = false;
				cout << pow(2, k) << a[i] << endl;
			}
			//cout << k << ' ';
		}

	}
	if (flag == true) {
		sort(a + 1, a + n + 1);
		cout << a[n - m + 1] << endl;
		return;
	}
	//f[0] = 0;
	return;
}

int main() {
	freopen("ans.in", "r", stdin);
	freopen("ans.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//cin<<T;
	while (T--) {
		solve();
	}
	return 0;
}
