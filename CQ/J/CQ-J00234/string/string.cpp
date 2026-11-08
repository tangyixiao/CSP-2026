#include<bits/stdc++.h>

using namespace std;
#define ll long long
string s;
ll sum,n,ans = 0;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	if(n <= 2000){
		for(ll i = 1;i <= n; i++) {
			ll x;cin >> x;
			string ch;cin >> ch;
			for(ll j = 1;j <= x; j++) s += ch;
			sum += x; 
		}
		ll cnt = 0;
		for(ll i = 0;i <= sum / 2;i++) {
			if(s[i] != s[sum - i - 1]) cnt++;
		}
		cout << cnt;
	} 
	else {
		cout << 0;
	}
	return 0;
} 
