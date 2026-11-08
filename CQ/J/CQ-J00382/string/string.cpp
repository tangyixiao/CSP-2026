#include <bits/stdc++.h>
using namespace std;
#define endl '\n' 
struct node {
	int a;
	char c;
};
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<node> a(n);
	for (auto& x : a) {
		cin >> x.a >> x.c;
	}
	string s = "";
	int len = 0;
	for (auto& x : a) { 
		for (int i = 0; i < x.a; ++i) {
	 		s.push_back(x.c);
	 		len++;
		}
	}
//	cout << s << endl;
	int cnt = 0;
	for (int i = 0, j = len - 1; i < j; ++i, --j) {
		if (s[i] != s[j]) cnt++;
	}
	cout << cnt << endl;
	return 0;
} 
/*
3
2 a
2 b
1 c
*/
