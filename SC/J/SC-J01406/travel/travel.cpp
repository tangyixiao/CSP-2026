#include <bits/stdc++.h>
using namespace std;

int main () {
	ios::sync_with_stdio(false);
	cin.tie (nullptr);
	
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string R1, R2, X1, X2;
	cin >> R1 >> R2 >> X1 >> X2;
	
	if (R1 == X1) cout << 1;
	else {cout << "0000"; return 0;}
	
	if (R2[1] == X2[1]) cout << 1;
	else {cout << "000"; return 0;}
	
	int R3 = (int)(R2[2] - 'A');
	int X3 = (int)(X2[2] - 'A');
	
	if ((R3>=0 && R3 < 3 && X3 >= 0 && X3 < 3) || (R3 >= 3 &&R3 <= 5 && X3 >= 3 && X3 <= 5)) cout << 1;
	else {cout << "00"; return 0;}
	
	if ((R3>=0 && R3 < 3 && X3 >= 0 && X3 < 3 && abs(X3 - R3) == 1) || (R3 >= 3 &&R3 <= 5 && X3 >= 3 && X3 <= 5)) cout << 1;
	else cout << "0";
	
	return 0;
}