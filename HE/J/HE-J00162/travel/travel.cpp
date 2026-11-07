#include <iostream>
#include <cstdio>
using namespace std;
string c1, s1, c2, s2;
bool a, b, c, d;
bool t[6] = {0, 0, 0, 1, 0, 1};
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2) a = true;
	if(a) {
		if(s1[0] == s2[0] && s1[1] == s2[1]) b = true;
	}
	if(b) {
		if(t[s1[2]-'A'] == t[s2[2]-'A']) c = true;
	}
	if(c) {
		if(s1[2] == 'A' || s1[2] =='C') {
			if(s2[2] == 'B') d = true;
		}
		else {
			if(s2[2] == 'A' || s2[2] == 'C') d = true;
	    }
	}
	cout << a << b << c << d;
	return 0;
}
