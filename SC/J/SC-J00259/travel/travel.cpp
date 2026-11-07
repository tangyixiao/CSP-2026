#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){

	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	string a , b; //车厢号
	string s; //座位号 R
	string c; //座位号 X 
	cin >> a >> s >> b >> c;
	if (a == b) cout << "1";
	else cout << "0";

//	cout << s.substr(0 , 2) << '\n';
//	cout << c.substr(0 , 2) << '\n';
	if (a == b && s.substr(0 , 2) == c.substr(0 , 2)) cout << "1";
	else cout << "0";
	
//	cout << s[2] << ' ' << c[2];
	bool f = 0;
	if (a == b && s.substr(0 , 2) == c.substr(0 , 2) && ((s[2] < 'D' && c[2] < 'D') || (s[2] >= 'D' && c[2] >= 'D'))) {
		f = 1;
		cout << "1";
	}
	else {
		cout << "0";
	}
	if (f && a == b && abs(s[2] - c[2]) == 1 && (s[2] != 'D' || s[2] != 'C')) cout << "1";
	else cout << "0";
	
	return 0;
} 