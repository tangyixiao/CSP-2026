#include <bits/stdc++.h> 
#define int long long 
using namespace std;
string a , b , c , d;
string ans;

inline bool check1(string x , string y){
	for(int i = 1 ; i <= 2 ; i++){
		if(x[i] != y[i]) return 0;
	}
	return 1;
}

inline bool check2(string x , string y){
	if((x[3] == 'A' || x[3] == 'B' || x[3] == 'C') && (y[3] == 'A' || y[3] == 'B' || y[3] == 'C')) return 1;
	if((x[3] == 'D' || x[3] == 'E') && (y[3] == 'D' || y[3] == 'E')) return 1;
	return 0;
}

inline bool check3(string x , string y){
	if(x[1] == y[1] && x[2] == y[2] && abs(x[3]-y[3]) == 1) return 1;
	return 0;
}

signed main(){
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	cin >> a; a = " " + a;
	cin >> b; b = " " + b;
	cin >> c; c = " " + c;
	cin >> d; d = " " + d;
	if(a == c) ans = ans + '1';
	else ans = ans + '0';
	if(ans == "1" && check1(b , d)) ans = ans + '1';
	else ans = ans + '0';
	if(ans == "11" && check2(b , d)) ans = ans + '1'; 
	else ans = ans + '0';
	if(ans == "111" && check3(b , d)) ans = ans + '1';
	else ans = ans + '0'; 
	cout << ans;
	return 0;
} 
