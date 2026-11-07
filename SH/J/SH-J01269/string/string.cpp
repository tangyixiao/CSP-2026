#include <bits/stdc++.h>
using namespace std;
string s;
int n, a;
char c;
long long ans = 0;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a >> c;
		for (int i = 1; i <= a; i++)
			s += c;
	}
	for (int i = 0; i < (s.length() / 2 + 1); i++){
		if (s[i] != s[s.length() - 1 - i])
			ans++;
	}
	if (s.length() % 2 == 0){
		cout << ans - 1;
		return 0;
	}
	cout << ans;
	return 0;
}
