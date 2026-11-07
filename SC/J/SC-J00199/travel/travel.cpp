#include <set>
#include <string>
#include <bits/stdc++.h>
#define ll long long
#define int ll
#define fi first
#define se second
#define pii pair<ll , ll>
#define mk make_pair
using namespace std;
const int N = 1e5 + 10;
ll n , a[N] , f1 , f2 , px1 , py1 , px2 , py2;
string a1 , b1 , a2 , b2;
ll read(){
	ll x = 0 , w = 1;
	char ch = getchar();
	while (ch < '0' || ch > '9') w = (ch == '-' ? -1 : 1) , ch = getchar();
	while (ch >= '0' && ch <= '9') x = x * 10 + ch - '0' , ch = getchar();
	return x;
}
ll get_f(string s){
	ll x = (s[0] - '0') * 10 + s[1] - '0';
	return x;
}
pii get_pos(string s){
	ll x , y;
	x = (s[0] - '0') * 10 + s[1] - '0';
	y = (s[2] - 'A') + 1;
	if (y == 6) y --;
	return mk(x , y);
}
ll op(ll x){
	if (x >= 1 && x <= 3) return 1;
	if (x >= 4 && x <= 5) return 2;
}
signed main(){
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> a1 >> b1 >> a2 >> b2;
	f1 = get_f(a1) , f2 = get_f(a2);
	px1 = get_pos(b1).fi , py1 = get_pos(b1).se;
	px2 = get_pos(b2).fi , py2 = get_pos(b2).se;
	if (f1 != f2) cout << "0000";
	else {
		cout << 1;
		cout << (px1 == px2);
		cout << (px1 == px2 && op(py1) == op(py2));
		cout << (px1 == px2 && op(py1) == op(py2) && abs(py1 - py2) == 1);
	}
	return 0;
}
/*

*/