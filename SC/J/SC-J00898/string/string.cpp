#include<bits/stdc++.h>
using namespace std;
string lan;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		char s;
		cin >> s;
		for(int j = 1; j <= a; j++) {
			lan += s;
		}
	}
	int m = lan.size(), d, ans = 0;
	if(m % 2 == 0) d = m / 2;
	else d = m / 2 + 1;
	for(int i = 0; i < d; i++) {
		if(lan[i] != lan[m - i - 1]) ans++; 
	}
	cout << ans;
	return 0;
}