#include <bits/stdc++.h>
using namespace std;
long long t = 1,x,y,z,w;
string a,b,c,d;
char s1,s2;
inline void solve();
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	while (t --){
		solve();
	}
	return 0;
}
inline void solve(){
	cin >> a >> b >> c >> d;
	s1 = b.back();
	s2 = d.back();
	for (long long i = 0;i < a.size();i ++){
		x = (x * 10 + a[i] - '0');
	}
	for (long long i = 0;i < b.size() - 1;i ++){
		z = (z * 10 + b[i] - '0');
	}
	for (long long i = 0;i < c.size();i ++){
		y = (y * 10 + c[i] - '0');
	}
	for (long long i = 0;i < d.size() - 1;i ++){
		w = (w * 10 + d[i] - '0');
	}
	cout << (x == y);
	cout << ((x == y) && (z == w));
	cout << (((x == y) && (z == w)) && ((s1 >= 'D' && s2 >= 'D') || (s1 <= 'C' && s2 <= 'C')));
	cout << ((x == y) && ((abs(z - w) == 1 && abs(s1 - s2) == 0) || (abs(s1 - s2) == 1 && abs(z - w) == 0)) && ((s1 >= 'D' && s2 >= 'D') || (s1 <= 'C' && s2 <= 'C')));
	return ;
}