#include<bits/stdc++.h>

using namespace std;

bool is(char ch, string s) {
	for(int i=0; i<s.length(); i++) {
		if(s[i] == ch) {
			return true;
		}
	}
	return false;
}

bool xl(char ch1, char ch2) {
	if(ch1 > ch2) {
		swap(ch1, ch2);
	}
	if(ch1 == 'A' && ch2 == 'B') {
		return true;
	}
	if(ch1 == 'B' && ch2 == 'C') {
		return true;
	}
	if(ch1 == 'D' && ch2 == 'F') {
		return true;
	}
	return false;
}

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	
	if(c1 == c2) {
		cout << "1";
		if(s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << "1";
			if((is(s1[2],"ABC") && is(s2[2], "ABC")) || (is(s1[2],"DF") && is(s2[2],"DF"))) {
				cout << "1";
				if(xl(s1[2], s2[2])) {
					cout << "1";
				} else {
					cout << "0";
				}
			} else {
				cout << "00";
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}
	
	
	return 0;	
	
}
