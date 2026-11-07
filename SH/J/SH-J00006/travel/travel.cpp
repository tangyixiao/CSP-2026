#include<bits/stdc++.h>
using namespace std;
bool ssid (char a, char b){
	int a1, b1;
	
	if (a == 'A' || a == 'B' || a == 'C') a1 = 1;
	else a1 = 2;
	if (b == 'A' || b == 'B' || b == 'C') b1 = 1;
	else b1 = 2;
	
	if (a1 == b1) return true;
	else return false;
}
int seat (char a){
	if (a == 'A') return 1;
	else if (a == 'B') return 2;
	else if (a == 'C') return 3;
	else if (a == 'D') return 4;
	else if (a == 'F') return 5;
}
int c1, c2;
string s1, s2;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	
	if (c1 != c2){
		cout << "0000";
		return 0;
	}
	else if(s1[0] != s2[0] || s1[1] != s2[1]){
		cout << "1000";
		return 0;
	}
	else if(!ssid(s1[2], s2[2])){
		cout << "1100";
		return 0;
	}
	else if(abs (seat (s1[2]) - seat (s2[2])) != 1){
		cout << "1110";
		return 0;
	}
	cout << "1111";
	return 0;
}
