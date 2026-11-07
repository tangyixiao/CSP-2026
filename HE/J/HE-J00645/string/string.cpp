#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 5;

long long n , a[N] , len , ans , cnt;
string s;

int main() {
	
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	
	cin >> n;
	for(int i = 1; i <= n; i++) {
		char c;
		cin >> a[i];
		cin >> c;
		len += a[i];
		for(int j = 0; j < a[i]; j++) s += c;
	}
	s = " " + s;
	for(long long i = 1; i <= len / 2; i++) {
		long long j = len - i + 1;
		if(s[i] != s[j] && j <= len) ans++;
	}
	cout << ans;
	
	return 0;
} 
// I love CCF! 
// RP++ 


