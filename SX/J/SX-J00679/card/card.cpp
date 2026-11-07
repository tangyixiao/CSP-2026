#include <bits/stdc++.h>
using namespace std;
const int N = 5e5, M = 3e5;
char ch[N];
int cnt[M];
bool flag = false;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	string s;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> ch[i];
	}
	string t;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			for (int l = t.size() - 1; l >= 0; l--) {
				if (flag == true) {
					s += t[l];
				}
				if (t[l] == ch[j]) {
					flag = true;
				}
			}
//			cout << "S:" << s;
			if (flag == true) {
				t = s;
			}
			t += ch[j];
			flag = false;
			s = "";
//			cout << "T:" << t << '\n';
//			reverse(t.begin(), t.end());
//			cout << t << '\n';
//			s = t;
//			t = "";
		}
		for (int j = 0; j < int(t.size()); j++) {
//			cout << t[j] - '0' << ':';
			cnt[t[j] - '0']++;
//			cout << cnt[t[j] - '0'] << ' ';
		}
//		cout << '\n';
		t = "";
		s = "";
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i] << ' ';
	}
	return 0;
}
