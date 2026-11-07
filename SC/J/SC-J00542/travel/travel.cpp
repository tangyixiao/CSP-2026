#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	string s11 = s1.substr(0,2);
	char s12 = s1[2];
	string s21 = s2.substr(0,2);
	char s22 = s2[2];
	if (c1 == c2) {
		cout << 1;
		if (s11 == s21) {
			cout << 1;
			if (((s12 == 'A' or s12 == 'B' or s12 == 'C') and (s22 == 'A' or s22 == 'B' or s22 == 'C')) or ((s12 == 'D' or s12 == 'F') and (s22 == 'F' or s22 == 'D'))) {
				cout << 1;
				if (abs(int(s12 - s22)) == 1) cout << 1;
				else cout << 0;
			} else printf("00");
		} else printf("000");
	} else printf("0000");
	return 0;
}