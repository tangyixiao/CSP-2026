# include <bits/stdc++.h>

using namespace std;

bool tyc = false;

int solve(string str1, string str2) {
	string cnt1 = "";
	cnt1 += str1[0];
	cnt1 += str1[1];
	
	int row1 = stoi(cnt1);
	
	string cnt2 = "";
	cnt2 += str2[0];
	cnt2 += str2[1];
	
	int row2 = stoi(cnt2);
	
	if (abs(row1 - row2) == 0) {
		if (abs(str1[2] - str2[2]) <= 1 || ((str1[2] == 'D' && str2[2] == 'F') || (str1[2] == 'F' && str2[2] == 'D'))) {
			if (!tyc) {
				return 0;
			} else {
				return 1;
			}
		} else {
			return 0;
		}
	} else if (abs(row1 - row2) == 1){
		if (str1[2] == str2[2]) {
			return 1;
		} else {
			return 0;
		}
	} else {
		return 0;
	}
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	
	int car1 = stoi(c1);
	int car2 = stoi(c2);
	
	if (car1 != car2) {
		cout << "0000";
		return 0;
	} else {
		cout << 1;
	}
	
	string str1 = "";
	str1 += s1[0]; str1 += s1[1];
	
	string str2 = "";
	str2 += s2[0]; str2 += s2[1];
	
	int cnt1 = stoi(str1);
	int cnt2 = stoi(str2);
	
	if (cnt1 != cnt2) {
		cout << "00";
	} else {
		cout << 1; 
		
		char temp1 = s1[2];
		char temp2 = s2[2];
		
		if ((temp1 >= 'D' && temp2 >= 'D') || (temp1 <= 'C' && temp2 <= 'C')) {
			cout << 1;
			tyc = true;
		} else {
			cout << 0;
		}
	}
	
	cout << solve(s1, s2);
	
	return 0;
}
