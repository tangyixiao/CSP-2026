#include<bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
bool f1, f2, f3, f4;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	for (int i = 0; i < 2; i++) {
		if (c1[i] != c2[i] && f1 == 0) {
			f1 = 1;
		}
		if (s1[i] != s2[i] && f2 == 0) {
			f2 = 1;
		}
	}
	if(f1==0) {
		if (f2 == 0) {
			if (s1[2] == 'F' || s1[2] == 'D') {
				if (s2[2] != 'F' && s2[2] != 'D') {
					f3 = 1;
				}
			} else {
				if (s2[2] != 'C' && s2[2] != 'B' && s2[2] != 'A') {
					f3 = 1;
				}
			}
		} else {
			f3 = 1;
		}
	}else{
		f2=1;
		f3=1;
	}
	if (f3 == 0) {
		if ((s1[2] - '0') - (s2[2] - '0') != 1 && (s1[2] - '0') - (s2[2] - '0') != -1) {
			f4 = 1;
		}
	} else {
		f4 = 1;
	}
	if (f1 == 0) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (f2 == 0) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (f3 == 0) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (f4 == 0) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
