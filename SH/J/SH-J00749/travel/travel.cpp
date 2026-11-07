#include <bits/stdc++.h>
using namespace std;
#define int long long
string c1,s1,c2,s2;
bool All_left() {
	return (s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C');
}
bool All_right() {
	return (s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F');
}
bool NEXT() {
	if(All_left()) {
		return abs(s1[2]-s2[2])==1;
	}else return true;
}
signed main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
//	cout << "Test: " << c1 << " " << s1 << " " << c2 << " " << s2 << endl;
	string h1 = "";
	h1+=s1[0];
	h1+=s1[1];
	string h2 = "";
	h2+=s2[0];
	h2+=s2[1];
	if(c1==c2) {
		if(h1==h2) {
			if(All_left()||All_right()) {
				if(NEXT()) cout << "1111" << endl;
				else cout << "1110" << endl;
			}else cout << "1100" << endl;
		}else cout << "1000" << endl;
	}else cout << "0000" << endl;
	return 0;
}
