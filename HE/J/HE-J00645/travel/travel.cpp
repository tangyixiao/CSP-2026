#include <bits/stdc++.h>

using namespace std;

string s1 , s2;
int c1 , c2 , a , b;
char c , d;
int main() {
	
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2) {
		cout << 1;
		for(int i = 0; i < 2; i++) {
			if(i == 0) {
				a += (s1[i] - '0') * 10;
				b += (s2[i] - '0') * 10;
			}
			if(i == 1) {
				a += s1[i] - '0';
				b += s2[i] - '0';
			}
		}
		if(a == b) {
			cout << 1;
			c = s1[2] , d = s2[2];
			if(c > d) swap(c, d);
			if((c == 'A')) {
				if(d == 'B') cout << "11";
				else if(d == 'C') cout << "10";
				else cout << "00";
			}
			else if(c == 'B') {
				if(d == 'C') cout << "11";
				else cout << "00";
			}
			else if(c == 'C') cout << "00";
			else if(c == 'D') {
				if(d == 'F') cout << "11";
				else cout << "00";
			}
			else cout << "00";
		}
		else cout << "000";
	}
	else cout << "0000";
	
	return 0;
} 

// 05 03A 05 03C
// I love CCF! 
// RP++ 
