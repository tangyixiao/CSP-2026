#include<bits/stdc++.h>
using namespace std;
int f(string s) {
	int n = 0;
	for(int i = 0; i < s.length(); i++) {
		n = n * 10 + s[i] - '0';
	}
	return n;
}
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2, c3, c4;
	cin >> c1 >> c2 >> c3 >> c4;
	int C1 = c2[c2.length() - 1] - 'A', C2 = c4[c4.length() - 1] - 'A';
	int a = f(c1), b = f(c2.substr(0,2)), c = f(c3), d = f(c4.substr(0,2));
	if(a == c) {
		cout << 1;
		if(b == d) {
			cout << 1;
			if((C1 >= 0 && C1 <= 2 && C2 >= 0 && C2 <= 2) || (C1 >= 3 && C1 <= 5 && C2 >= 3 && C2 <= 5)) {
				cout << 1;
				if((C1 == 0 && C2 == 1) || (C1 == 1 && C2 == 2) || (C1 == 3 && C2 == 5)) {
					cout << 1; 
				}
				else cout << 0;
			}
			else cout << "00";
		}
		else cout << "000";
	}
	else cout << "0000";
	return 0;
}
