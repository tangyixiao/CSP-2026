#include<bits/stdc++.h>
using namespace std;
int fen(string a) {
	if (a[2] >= 'A' && a[2] <= 'C') return 1;
	else return 0;
}
int xl(string i, string j) {
	if (i[2] != 'C' && j[2] != 'D') {
		if (i[2] != 'D' && j[2] != 'C') {
			if (i[2] == j[2]+1 || i[2] == j[2]-1) {
				return 1;
			}
		}
	}
	return 0;
}
string c1, s1, c2, s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2){
		cout << true;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << true;
			if (fen(s1) == fen(s2)) {
				cout << true;
				if (xl(s1, s2)) cout << true;
				else cout << 0;
			} else cout << "00";
		}else cout << "000";
	} else cout << "0000";
	
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}

