#include <bits/stdc++.h>
using namespace std;
bool ishw(string s) {
	string b = s;
	reverse(s.begin(), s.end());
	return s == b;
}
int main() {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	int n;
	cin >> n;
	string str = "";
	map<char, int> m;
	while (n--) {
		int a;
		char c;
		cin >> a >> c;
		m[c] += a;
		while (a--) str += c;
	}
	if (ishw(str)) 
		cout << 0 << '\n';
	else {
		set<int> v;
		for (auto i : m)
			v.insert(i.second);
		cout << *v.rbegin();
	}
	return 0;
}