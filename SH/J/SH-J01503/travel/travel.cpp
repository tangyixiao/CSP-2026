#include <bits/stdc++.h>

using namespace std;
string ans;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;

	cin >>c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		ans += '1';
	}else{
		ans+='0';
	}
	
	
	if (s1[0] == s2[0] && s1[1] == s2[1] && c1 == c2) {
		ans+= '1';
	}else{
		ans += '0';
	}
	
	bool d1=0,d2=0;
	
	if (s1[2] >= 'A' && s1[2] <='C') {
		d1 = 1;
	}else if (s1[2] >='D' && s1[2] <='F') {
		d1 = 0;
		
	}
	if (s2[2] >= 'A' && s2[2] <='C') {
		d2 = 1;
	}else if (s2[2] >='D' && s2[2] <='F') {
		d2 = 0;
		
	}
	
	if (s1[0] == s2[0] && s1[1] == s2[1] && c1 == c2 && d1==d2) {
		ans += '1';
	}else{
		ans += '0';
	}
	if (s1[0] == s2[0] && s1[1] == s2[1] && c1 == c2 && d1==d2) {
		if (s1[2] + 1 == s2[2] || s1[2] -1 == s2[2]) {
			ans += '1';
		}else{
			ans += '0';
		}
	}else{
		ans += '0';
	}
	cout << ans;
	return 0;
}
