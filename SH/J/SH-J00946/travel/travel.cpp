#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;

int change(char a) {
	if (a>='A' && a<='C') return 1;
	return 2;
}

bool check(char a,char b) {
	if (a=='D' || b=='D') return true;
	if (a=='A' && b=='B') return true;
	if (a=='B' && b=='A') return true;
	if (a=='C' && b=='B') return true;
	if (a=='B' && b=='C') return true;
	return false;
}

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1==c2) cout << '1';
	else {
		cout << "0000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if (s1[0]==s2[0] && s1[1]==s2[1]) cout << '1';
	else {
		cout << "000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if (change(s1[2])==change(s2[2])) cout << '1';
	else {
		cout << "00";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if (check(s1[2],s2[2])) cout << '1';
	else {
		cout << "0";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
