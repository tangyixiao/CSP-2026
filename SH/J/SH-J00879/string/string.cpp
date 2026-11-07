#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	int n;
	cin >> n;
	string s = "";
	for(int i = 1; i <= n; i++) {
		int a;
		char c;
		cin >> a >> c;
		for(int j = 1; j <= a; j++) {
			s += c;
		}
	}
	string str = s;
	reverse(s.begin(), s.end());
	if(str == s) {
		cout << "0\n";
		return 0;
	}
	int ans = 0;
	for(int i = 0; i < ceil(s.size() / 2); i++) {
		if(s[i] != str[i]) {
			ans++;
		}
	}
	cout << ans << "\n";
	return 0; 
}
