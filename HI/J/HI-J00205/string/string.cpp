
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n, L=0;
	cin >> n;
	while (n--) {
		ll ct;
		char c;
		cin >> ct >> c;
		L += ct;
		for (ll i = 0; i < ct; i++) {
			s.push_back(c); 
		}
	}
	ll l = 0, r = s.size()-1;
	ll cnt = 0;
	for (ll i = 0; i < (s.size() + 1)/2; i++) {
		if (s[i] != s[L-1-i]) cnt++;
		
	}

	cout <<cnt;
	return 0;
}


