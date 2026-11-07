#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5 + 5;
int A[N];
string base10_2(int t) {
	string s1, s2;
	while (t) {
		s1 += char(t % 2 + '0');
		t /= 2;
	}
	t = 30 - s1.size();
	while (t) {
		s1 += '0';
		t--;
	}
	for (int i = s1.size() - 1; i >= 0; i--) s2 += s1[i];
	return s2;
}

int base2_10(string s) {
	int t = s.size() - 1, ans = 0;
	while (t > -1) {
		if (s[t] == '1') ans += pow(2, s.size() - t - 1);
		t--;
	}
	return ans;
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, maxn = -1;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
		maxn = max(A[i], maxn);
	}
	if (m == 1) {
		cout << maxn;
		return 0;
	}
	int b = 1;
	for (int i = 1; i < n; i++) {
		if (A[i] - A[i - 1] == 1) continue;
		else {
			b = 0;
			break;
		}
	}
	if (b) {
		for (int i = n - 1; i >= 0; i--) {
			string s2 = base10_2(A[i]);
			int b1 = 1;
			for (int j = 0; j < s2.size(); j++) {
				if (s2[j] != '1') {
					b1 = 0;
					break;
				}
			}
			if (b1) {
				cout<<A[i];
				return 0;
			}
		}
	}
	vector<string> S(n + 5);
	for (int i = 0; i < n; i++) S[i] = base10_2(A[i]);
	if (m == 2) {
		int maxa = -1;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				string s;
				for (int k = 0; k < 30; k++) {
					if (S[i][k] == '1' && S[j][k] == '1') s += '1';
					else s += '0';
				}
				int a = base2_10(s);
				maxa = max(maxa, a);
			}
		}
		cout << maxa;
		return 0;
	}
	int t = 1;
	for (int i = 0; i < n; i++) {
		int p = S[i].find(30, 1);
		while (p <= S[i].size()) {
			if (S[i][p] != '1') {
				t = 0;
				break;
			}
		}
		if (!t) break;
	}
	if (t) {
		cout << 1;
		return 0;
	}
	return 0;
	fclose(stdin);
	fclose(stdout);
}