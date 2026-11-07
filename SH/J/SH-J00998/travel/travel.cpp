#include <bits/stdc++.h>

using namespace std;

int main() {
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int a,b;
	string s1,s2;
	cin >> a >> s1 >> b >> s2;
	if(a != b) {
		cout << "0000\n";
		return 0;
	}
	if(s1[0] != s2[0] || s1[1] != s2[1]) {
		cout << "1000\n";
		return 0;
	}
	char c1,c2;
	c1 = s1[2],c2 = s2[2];
	int l,r;
	if(c1 == 'A' || c1 == 'B' || c1 == 'C') {
		l++;
	} else {
		r++;
	}
	if(c2 == 'A' || c2 == 'B' || c2 == 'C') {
		l++;
	} else {
		r++;
	}
	
	if(l != 2 && r != 2) {
		cout << "1100\n";
		return 0;
	}
	if(l == 2 && abs(int(c1)-int(c2)) == 1) {
		cout << "1111\n";
		return 0;
	}else if(r == 2){
		cout << "1111\n";
		return 0;
	}
	
	cout << "1110\n";
	return 0;
}

