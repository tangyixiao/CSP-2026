#include <bits/stdc++.h>
using namespace std;

int n;
vector<char> s;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for (int i = 1, a; i <= n; i++) {
		char c;
		cin >> a >> c;
		for (int j = 1; j <= a; j++)
			s.push_back(c);
	}
	
	int l = s.size();
	int diff = 0;
	
	for (int i = 0; i < l / 2; i++)
		if (s[i] != s[l - i - 1])
			diff++;
	
	cout << diff;
	
	return 0;
}
