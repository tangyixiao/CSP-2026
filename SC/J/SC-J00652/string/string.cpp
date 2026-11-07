#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct S { ll l; char c; };

ll n;
vector <S> s;

ll len = 0;
ll ans = 0;
string ss = "";

ll gcd;


int main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(0),cin.tie(0);
	
	cin >> n;
	s.resize(n+1);
	for (int i = 1;i <= n;i ++){
		cin >> s[i].l >> s[i].c;
		if (i != 1)   gcd = __gcd(gcd,s[i].l);
		else gcd = s[i].l;
	}
	
	for (int i = 1;i <= n;i ++){
		s[i].l /= gcd;
		len += s[i].l;
		for (int j = 1;j <= s[i].l;j ++){
			ss += s[i].c;
		}
	}
	
	for (int i = 1,j = len-i+1;i <= len/2;i ++)
		if (ss[i] != ss[j])   ans ++;
	
	cout << ans*gcd;
	
	return 0;
	
	
}