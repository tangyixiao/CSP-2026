#include <bits/stdc++.h>
using namespace std;

bool check__1(char a, char b) {
	if(a == 'F' || a == 'D') {
		if(b == 'F' || b == 'D') return true;
		else return false;
	}
	else {
		if(b == 'A' || b == 'B' || b == 'C') return true;
		else return false;
	}
}

bool check__2(char a, char b) {
	if(check__1(a, b)) {
		if(a == 'F' || b == 'F') {
			if(a == 'D' || b == 'D') return true;
			else return false;
		}
		if(abs(a - b) == 1) return true;
		else return false;
	}
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string str;
	int ai, bi, aj, bj;
	char ak, bk; 
	for(int i = 1; i <= 4; i++) {
		cin >> str;
		if(i == 1) {
			ai = str[0] - '0';
			ai *= 10;
			ai += str[1] - '0';
		}
		else if(i == 3) {
			bi = str[0] - '0';
			bi *= 10;
			bi += str[1] - '0';
		}
		else if(i == 2) {
			ak = str[2];
			aj = str[0] - '0';
			aj *= 10;
			aj += str[1] - '0';
		}
		else if(i == 4) {
			bk = str[2];
			bj = str[0] - '0';
			bj *= 10;
			bj += str[1] - '0';
		}
	}
	if(ai == bi) cout << 1;
	else cout << 0;
	if(ai == bi && bj == aj) cout << 1;
	else cout << 0;
	if(ai == bi && bj == aj && check__1(ak, bk)) cout << 1;
	else cout << 0;
	if(ai == bi && bj == aj && check__2(ak, bk)) cout << 1;
	else cout << 0;
	return 0;
}
