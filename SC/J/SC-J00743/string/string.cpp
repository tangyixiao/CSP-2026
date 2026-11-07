#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int N;
	cin >> N;
	string S;
	for (int i = 1; i <= N; i++) {
		int a;
		char c;
		cin >> a >> c;
		while (a--) {
			S += c;
		}
	}
	string s1, s2;
	for (int i = 0; i < S.size() / 2; i++) {
		s1 += S[i];
	}
	for (int i = S.size() / 2; i < S.size(); i++) {
		s2 += S[i];
	}
	int ans = 0;
	for (int i = 0; i < min(s1.size(), s2.size()); i++) {
		if (s1[i] != s2[i]) ans++;
	}
	cout << ans;
	return 0;
}

//3
//2 a
//2 b
//1 c
//2
//2 a
//3 a
//6
//1000000000 a
//1000000000 a
//1000000000 a
//1000000000 b
//1000000000 b
//1000000000 b
