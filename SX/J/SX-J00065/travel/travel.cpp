#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define pii pair<int, int>
#define ull unsigned long long
#define ve vector<int>
using namespace std;
const int N = 1e8 + 10;
const int INF = 0x3f3f3f3f;
int a[N];
int n;
void solve() {
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << "0000";
	}
	else {
		cout << 1;
		string ss1 = s1.substr(0, 2);
		string ss2 = s2.substr(0, 2);
		if (ss1 != ss2) {
			cout << "000";
		}
		else {
			cout << 1;
			if (s1[2] <= 'C' && s2[2] > 'C') {
				cout << "00";
			}
			else {
				cout << 1;
				if (s1[2] + 1 == s2[2] || s2[2] + 1 == s1[2]){
					cout << 1;
				}
				else {
					cout << 0;
				}
			}
		}
	}
}
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int t = 1;
//	cin >> t;
	while (t --) {
		solve();
	}
	return 0;
}