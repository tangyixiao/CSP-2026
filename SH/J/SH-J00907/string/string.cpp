#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
string s;
int n;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1; i <= n; i++) {
		int l;
		char c;
		cin >> l >> c;
		for(int j = 1;j<=l;j++){
			s += c;
		}
	}
	long long rn = s.size()-1;
	long long ans = 0;
	for(int i = 0; rn-i >= i; i++) {
		if(s[i] != s[rn-i]){
			ans++;
		}
	}
	cout << ans << " ";
	return 0;
}
