#include <bits/stdc++.h>

using namespace std;

bool secid(char c) {
	switch (c) {
	case 'A':
	case 'B':
	case 'C':
	default:
		return false;
	case 'D':
	case 'F':
		return true;
	}
}

int seqid(char c) {
	switch (c) {
		default:
		case 'A':
			return 0;
		case 'B':
			return 1;
		case 'C':
			return 2;
		case 'D':
			return 3;
		case 'F':
			return 4;
	}
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
    string c1, s1, c2, s2;
    cin >> c1 >> s1 >> c2 >> s2;
    
    if (c1 != c2) {
	    cout << "0000" << endl;
	    return 0;
	}
	
	int s1p = (s1[0] - '0') * 10 + (s1[1] - '0');
	int s2p = (s2[0] - '0') * 10 + (s2[1] - '0');
	
	if (s1p != s2p) {
		cout << "1000" << endl;
		return 0;
	}
	
	if (secid(s1[2]) != secid(s2[2])) {
		cout << "1100" << endl;
		return 0;
	}
	
	int delta = seqid(s1[2]) - seqid(s2[2]);
	if (delta != 1 && delta != -1) {
		cout << "1110" <<endl;
		return 0;
	}
	
	cout << "1111" << endl;
}
