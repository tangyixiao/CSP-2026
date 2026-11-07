#include <bits/stdc++.h>
using namespace std;

bool lr(char c) {
	if (c=='A'||c=='B'||c=='C') {
		return 0;
	}
	return 1;
}
int posn(char c) {
	if (c=='F') return 8;
	if (c=='D') return 7;
	return (int)(c-'A'+1); 
}

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >>c1>>s1>>c2>>s2;
	if (c1==c2) {
		cout <<"1";
		if (s1[0]==s2[0]&&s1[1]==s2[1]) {
			cout <<"1";
			if (lr(s1[2])==lr(s2[2])) {
				cout <<"1";
				if (posn(s1[2])+1==posn(s2[2])||posn(s1[2])==posn(s2[2])+1) {
					cout <<"1";
				}else {
					cout <<"0";
				}
			} else {
				cout <<"00";
			}
		} else {
			cout <<"000";
		}
	} else {
		cout <<"0000";
	}
	return 0;
}

