#include <bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
bool is_tc = false;
bool tc(char c) {
	if(c == 'A' || c == 'B' || c == 'C') {
		return 0;
	}else if(c == 'D' || c == 'E') {
		return 1;
	}
}
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >>c1 >>s1 >>c2 >>s2;
	if(c1 == c2) {
		cout <<"1";
	}else {
		cout <<"0000";
		return 0;
	}
	if(s1[0] == s2[0] && s1[1] == s2[1]) {
		cout <<"1";
	}else {
		cout <<"000";
		return 0;
	}
	if(tc(s1[2]) == tc(s2[2])) {
		cout <<"1";
		is_tc = true;
	}else {
		cout <<"00";
		return 0;
	}
	if(is_tc == true && abs(s1[2] - s2[2]) == 1) {
		cout <<"1";
	}else {
		cout <<"0";
	}
	return 0;
} 
