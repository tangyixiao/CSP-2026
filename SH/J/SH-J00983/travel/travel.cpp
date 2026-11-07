#include <bits/stdc++.h>
using namespace std;
string c1, c2, s1, s2;
bool f = 1;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2) {
		cout << 1;
	} else {
		cout << 0;
		f = 0;
	}
	if(s1[0] == s2[0] && s1[1] == s2[1] && f) {
		cout << 1;
	} else {
		cout << 0;
		f = 0;
	}
	if((s1[2] <= 'C' && s2[2] <= 'C' && f) || (s1[2] > 'C' && s2[2] > 'C' && f)) {
		cout << 1;
	} else {
		cout << 0;
		f = 0;
	}
	if(s1[2] == 'F') {
		s1[2] = 'E';
	}
	if(s2[2] == 'F') {
		s2[2] = 'E';
	}
	if(s1[2] > s2[2]) swap(s1, s2);
	if(f && s2[2] - s1[2] == 1) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
	fclose(stdin);
	fclose(stdout);
} 
