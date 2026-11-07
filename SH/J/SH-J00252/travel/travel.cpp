#include<bits/stdc++.h>
using namespace std;

bool check(string a, string b){
	if(a[2] == 'A'){
		if(b[2] == 'B') return true;
	}
	if(a[2] == 'B'){
		if(b[2] == 'A' || b[2] == 'C') return true;
	}
	if(a[2] == 'C'){
		if(b[2] == 'B') return true;
	}
	if(a[2] == 'D'){
		if(b[2] == 'F') return true;
	}
	if(a[2] == 'F'){
		if(b[2] == 'D') return true;
	}
	return false;
}

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2;
	string s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2) cout << 1;
	else{
		cout << "0000";
		return 0;
	}
	if(s1[0] == s2[0] && s1[1] == s2[1]) cout << 1;
	else{
		cout << "000";
		return 0;
	}
	if(((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] != 'D' && s2[2] != 'F')) || ((s1[2] == 'D' || s1[2] == 'F') && (s2[2] != 'A' && s2[2] != 'B' && s2[2] != 'C'))) cout << 1;
	else{
		cout << "00";
		return 0;
	}
	if(check(s1, s2)) cout << 1;
	else cout << 0; 
	return 0;
} 
