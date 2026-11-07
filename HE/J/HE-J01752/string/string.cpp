#include<bits/stdc++.h>
using namespace std;



int main() {

	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	int n;
	cin >> n;
	
	string s;
	long long t;
	char c;
	for(int i = 1; i <= n; i++){
		cin >> t >> c;
		for(long long j = 1; j <= t; j++){
			s += c;
		}
	}
	
	long long len = s.size();
	long long ans = 0;
	for(int i = 0; i <= len / 2; i++){
		if(s[i] != s[len - i - 1])ans++;
	}
	
	cout << ans;
	
	return 0;
}
