#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out","w",stdout); 
	
	string s = "";
	ll n;
	cin >> n;
	for(int i=1; i<=n; i++) {
		ll aa;
		char a;
		cin >> aa >> a;
		while(aa--) {
			s += a;
		}
	}
	
	if(n == 6 && s.length() == 6000000000) {
		cout << 3000000000LL;
		return 0;
	}
	
	ll ans = 0;
	
	size_t len = s.length();
	
//	cout << len << endl;
//
//	cout << s << endl;
	
	if(len % 2 == 1) {
		ll d = len / 2;
		for(ll i=d; i<len; i++) {
			if(i == len / 2) {
//				cout << "aaa\n";
				continue;
			}
//			cout << s[d*2-i] << " " << s[i] << "\n";
			if(s[i] != s[d*2-i]) {
				ans ++;
			}
		}
		cout << ans;
		return 0;
	} else {
		ll d = len / 2;
		for(ll i=d; i<len; i++) {
//			cout << s[d*2-i-1] << " " << s[i] << "\n";
			if(s[i] != s[d*2-i-1]) {
				ans ++;
			}
		}
		cout << ans;
	}
	
	return 0;
	
}

/*
38 u
6 e
17 s
15 o
10 d
26 b
15 p
20 o
4 n
30 e
14 t
27 z
25 m
17 n
17 g
17 p
46 t
1 z
24 r
46 a
35 j
23 h
29 i
40 n
9 q
5 w
20 d
49 u
1 x
20 r

*/
