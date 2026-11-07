#include <bits/stdc++.h>
using namespace std;

bool check(string s1, string s2){
	if (s1[2] == 'A'){
		if (s2[2] == 'B') return 1;
		else return 0;
	}
	if (s1[2] == 'B'){
		if (s2[2] == 'A' || s2[2] == 'C') return 1;
		else return 0;
	}
	if (s1[2] == 'C'){
		if (s2[2] == 'B' || s2[2] == 'D') return 1;
		else return 0;
	}
	if (s1[2] == 'D'){
		if (s2[2] == 'C' || s2[2] == 'F') return 1;
		else return 0;
	}
	else{
		if (s2[2] == 'D') return 1;
		return 0;
	}
}

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) cout << "0000" << endl;
	else{
		cout << 1;
		int a = s1[0] * 10 + s1[1];
		int b = s2[0] * 10 + s2[1];
		if (a != b) cout << "000" << endl;
		else{
			cout << 1;
			if (check(s1, s2)) cout << 11;
			else{
				if ((s1[2] == 'A' && s2[2] == 'C') || (s1[2] == 'C' && s2[2] == 'A')) cout << 1;
				else cout << 0;
				cout << 0;
			}
		}
	}
	return 0;
}
