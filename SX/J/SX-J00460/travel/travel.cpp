#include <bits/stdc++.h>
using namespace std;
#define ll long long
string s1, s3;
int s, s2;

int main() {
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	cin >> s >> s1 >> s2 >> s3;
	if (s != 01 && s != 16 && s2 != 01 && s2 != 16 && s == s2 && s1[0] == s3[0] && s1[1] == s3[1]) {
		if ((s1[2] == 'A' && s3[2] == 'B') || (s1[2] == 'B' && s3[2] == 'A') || (s1[2] == 'B' && s3[2] == 'C') || (s1[2] == 'C'
		        && s3[2] == 'B') || (s1[2] == 'D' && s3[2] == 'F') || (s1[2] == 'F' && s3[2] == 'D')) {
			cout << 1111;
		}
	} else {
		if (s != s2) {
			cout << 0000;
		} else {
			if ((s1[2] == 'A' && s3[2] != 'B') || (s1[2] == 'B' && s3[2] != 'A') || (s1[2] == 'B' && s3[2] != 'C') || (s1[2] == 'C'
			        && s3[2] != 'B') || (s1[2] == 'D' && s3[2] != 'F') || (s1[2] == 'F' && s3[2] != 'D')) {
				cout << 1110;
			}
		}
	}
//02 01A 03 01A


	return 0;
}