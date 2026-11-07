#include<bits/stdc++.h>
#define int long long
using namespace std;

int n, anso, anst;
string s;

signed main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	
	for (int i = 0; i < n; ++i) {
		int t;
		char c;
		cin >> t >> c;
		for (int j = 0; j < t; ++j) s.push_back(c);
	}
	
	string q, h;
	
	for (int i = 0; i < s.size()/2; ++i) q.push_back(s[i]);
	for (int i = 0; i < s.size()/2; ++i) h.push_back(s[s.size() - i - 1]);
	for (int i = 0; i < q.size(); ++i) if (q[i] != h[i]) anso ++;
	
	cout << anso;
	
	return 0;
}