#include <bits/stdc++.h>
using namespace std;
long long n, a, m;
string b;
vector<long long>s1;
vector<string>s2;

//fbg fbirtweyrfinwear ftn8 nirwe8y
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		s1.push_back(a);
		s2.push_back(b);
	}
	while (s1.size() != 0 && s1.size() != 1) {
		if (s2[0] == s2[s2.size() - 1]) {
			if (s1[0] > s1[s1.size() - 1]) {
				s1[0] -= s1[s1.size() - 1];
				s1.erase(s1.begin() + s1.size() - 1);
				s2.erase(s2.begin() + s2.size() - 1);
			} else if (s1[0] < s1[s1.size() - 1]) {
				s1[s1.size() - 1] -= s1[0];
				s1.erase(s1.begin());
				s2.erase(s2.begin());
			} else if (s1[0] == s1[s1.size() - 1]) {
				s1.erase(s1.begin() + s1.size() - 1);
				s2.erase(s2.begin() + s2.size() - 1);
				s1.erase(s1.begin());
				s2.erase(s2.begin());
			}
		} else if (s2[0] != s2[s2.size() - 1]) {
			if (s1[0] > s1[s1.size() - 1]) {
				s1[0] -= s1[s1.size() - 1];
				m += s1[s1.size() - 1];
				s1.erase(s1.begin() + s1.size() - 1);
				s2.erase(s2.begin() + s2.size() - 1);
			} else if (s1[0] < s1[s1.size() - 1]) {
				s1[s1.size() - 1] -= s1[0];
				m += s1[0];
				s1.erase(s1.begin());
				s2.erase(s2.begin());
			} else if (s1[0] == s1[s1.size() - 1]) {
				m += s1[s1.size() - 1];
				s1.erase(s1.begin() + s1.size() - 1);
				s2.erase(s2.begin() + s2.size() - 1);
				s1.erase(s1.begin());
				s2.erase(s2.begin());
			}
		}
	}
	cout << m;
	return 0;
}
//udtshurefuserkuifsgynfauiawguj
