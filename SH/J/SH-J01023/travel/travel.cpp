#include<bits/stdc++.h>
#include<fstream>
#include<iostream>
using namespace std;
int main() {
	freopen("travel.in","r", stdin);
	freopen("travel.out","w", stdout);
	string c_1, s_1, c_2, s_2;
	bool flag = 1;
	cin >> c_1 >> s_1 >> c_2 >> s_2;
	if(c_1 == c_2) cout << 1;
	else if(c_1 != c_2) {
		cout << "0000";
		return 0;
	}
	for(int i = 0; i < 2; i ++) {
		if(s_1[i] != s_2[i]) {
			flag = 0;
		}
	}
	if(flag == 0) {
		cout << "000"; 
		return 0;
	}
	else {
		cout << 1;
	}
	if(s_1[2] == 'A' && s_2[2] == 'B') cout << 1;
	else if(s_1[2] == 'A' && s_2[2] == 'C') cout << 1;
	else if(s_1[2] == 'B' && s_2[2] == 'C') cout << 1;
	else if(s_1[2] == 'B' && s_2[2] == 'A') cout << 1;
	else if(s_1[2] == 'C' && s_2[2] == 'A') cout << 1;
	else if(s_1[2] == 'C' && s_2[2] == 'B') cout << 1;
	else if(s_1[2] == 'D' && s_2[2] == 'F') cout << 1;
	else if(s_1[2] == 'F' && s_2[2] == 'D') cout << 1;
	else {
		cout << "00";
		return 0; 
	}
	if(s_1[2] == 'A' && s_2[2] == 'B') cout << 1;
	else if(s_1[2] == 'B' && s_2[2] == 'C') cout << 1;
	else if(s_1[2] == 'B' && s_2[2] == 'A') cout << 1;
	else if(s_1[2] == 'C' && s_2[2] == 'B') cout << 1;
	else if(s_1[2] == 'D' && s_2[2] == 'F') cout << 1;
	else if(s_1[2] == 'F' && s_2[2] == 'D') cout << 1;
	else {
		cout << "0";
		return 0; 
	}
	return 0;
} 
