#include<bits/stdc++.h>
using namespace std;
long long n, l, ans;
string s, sd;
char ss;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out","w", stdout);
	cin >> n;
	while(n--) {
		cin >> l;
		cin >> ss;
		for(long long i = 1; i <= l; i++) {
			s += ss;
		}
	}
	long long ll = s.size();
	for(long long i = ll-1; i >= 0; i--) {
		sd += s[i];
	}
	for(long long i = 0; i < ll; i++) {
		if(sd[i] != s[i]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
} 
