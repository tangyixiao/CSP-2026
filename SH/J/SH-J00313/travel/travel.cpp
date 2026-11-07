#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string c1 = "", s1 = "", c2 = "", s2 = "";
	cin >> c1 >> s1 >> c2 >> s2;
	
	if (c1 == c2){
		cout << "1";
	} else {
		cout << "0000" << endl;
		return 0;
	}

	if (s1.substr(0, 2) == s2.substr(0, 2)){
		cout << "1";
	} else {
		cout << "000" << endl;
		return 0;
	}
	
	char l1 = s1[2];
	char l2 = s2[2];
	
	if (l1 == 'A'){
		if (l2 == 'B' || l2 == 'C')
			cout << "1";
		else {
			cout << "00" << endl;
			return 0;
		}
	}
	else if (l1 == 'B'){
		if (l2 == 'A' || l2 == 'C')
			cout << "1";
		else {
			cout << "00" << endl;
			return 0;
		}
	}
	else if (l1 == 'C'){
		if (l2 == 'A' || l2 == 'B')
			cout << "1";
		else {
			cout << "00" << endl;
			return 0;
		}
	}
	else if (l1 == 'D' && l2 == 'F' || l1 == 'F' && l2 == 'D'){
		cout << "1";
	}
	else {
		cout << "00";
		return 0;
	}
	
	if (l1 == 'F') l1 = 'E';
	if (l2 == 'F') l2 = 'E';
	if (abs(l1 - l2) == 1) cout << "1";
	else cout << "0";
	
	return 0;
}
