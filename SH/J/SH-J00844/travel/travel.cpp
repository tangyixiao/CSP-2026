#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

// checks whether the two sits are in the same side
inline bool check1(char row1,char row2) {
	return 
	(row1 == 'A' && row2 == 'B') || 
	(row1 == 'A' && row2 == 'C') || 
	(row1 == 'B' && row2 == 'C') || 
	(row2 == 'A' && row1 == 'B') || 
	(row2 == 'A' && row1 == 'C') || 
	(row2 == 'B' && row1 == 'C') || 
	(row1 == 'D' && row2 == 'F') || 
	(row2 == 'D' && row1 == 'F');
}

// checks whether the two sits are nearby
inline bool check2(char row1,char row2) {
	return 
	(row1 == 'A' && row2 == 'B') || 
	(row1 == 'B' && row2 == 'C') || 
	(row2 == 'A' && row1 == 'B') || 
	(row2 == 'B' && row1 == 'C') || 
	(row1 == 'D' && row2 == 'F') || 
	(row2 == 'D' && row1 == 'F'); 
}

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int col1 = (s1[0] - '0') * 10 + (s1[1] - '0'),col2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	char row1 = s1[2],row2 = s2[2];
	bool f1 = false,f2 = false,f3 = false,f4 = false;
	if (c1 == c2) {
		f1 = true;
		if (col1 == col2) {
			f2 = true;
			if (check1(row1,row2)) {
				f3 = true;
				if (check2(row1,row2))
					f4 = true;
			}
		}
	}
	cout << f1 << f2 << f3 << f4 << endl;
	return 0;
}
