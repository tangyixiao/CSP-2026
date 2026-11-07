#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	string s;
	char c;
	int m, k;
	for(int i = 0; i < n; i++) {
		cin >> m >> c;
		k += m;
		for(int j = 0; j < m; j++) {
			s += c;
		}
	}
	string s1, s2;
	int ans;
	for(int i = 0; i < k/2; i++) {
		s1 += s[i];
	}
	for(int i = k-1; i > k/2; i--) {
		s2 += s[i];
	}
//	cout << s1 << endl << s2 << endl << s << endl;
	for(int i = 0; i < k/2; i++) {
		if(s1[i] != s2[i]) {
			ans++;
		}
	}
	cout << ans/2;
	
	return 0;
}
