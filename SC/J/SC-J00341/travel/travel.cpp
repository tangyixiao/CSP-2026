#include <iostream>
using namespace std;
int c1, c2;
string s1, s2;
bool pan(string s1, string s2){
	int x1a = 0, x2a = 0;//1:abc   2:df
	char s1a, s2a;
	s1a = s1[2];
	s2a = s2[2];
	if (s1a == 'A' || s1a == 'B' || s1a == 'C'){
		x1a = 1;
	}
	if (s1a == 'D' || s1a == 'F'){
		x1a = 2;
	}
	if (s2a == 'A' || s2a == 'B' || s2a == 'C'){
		x2a = 1;
	}
	if (s2a == 'D' || s2a == 'F'){
		x2a = 2;
	}
	if (x1a == x2a){
		return true;
	} 
	return false;
}
bool check(string s1, string s2){
	char s1a, s2a;
	s1a = s1[2];
	s2a = s2[2];
	if (s1a == 'F'){
		s1a = 'E';
	}
	if (s2a == 'F'){
		s2a = 'E';
	}
	if ((s1a == s2a - 1) || (s1a == s2a + 1)){
		return true;
	}
	return false;
}
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	bool a, b, c, d;
	a = b = c = d = false;
	if (c1 == c2){
		cout << 1;
		a = 1;
	} else {
		cout << 0;
	}
	if ((s1[0] == s2[0]) && s1[1] == s2[1] && a){
		cout << 1;
		b = 1;
	}else {
		cout << 0;
	}
	if (pan(s1, s2) && b){
		cout << 1;
		c = 1;
	}else {
		cout << 0;
	}
	if (check(s1, s2) && c){
		cout << 1;
	} else {
		cout << 0;
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}