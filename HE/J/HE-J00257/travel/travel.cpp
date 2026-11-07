#include<bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
bool f1, f2, f3, f4;
bool pai(char a, char b){
	if(a == 'A' || a == 'B' || a == 'C'){
		if(b == 'A' || b == 'B' || b == 'C'){
			return 1;
		}
	}
	if(a == 'D' || a == 'F'){
		if(b == 'D' || b == 'F'){
			return 1;
		}
	}
	return 0;
}
bool xl(char a, char b){
	if (a == 'A'){
		return b == 'B';
	}
	if (a == 'B'){
		return b == 'A' || b == 'C';
	}
	if (a == 'C'){
		return b == 'B';
	}
	if (a == 'D'){
		return b == 'F';
	}
	if (a == 'F'){
		return b == 'D';
	}
	return 0;
}
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		f1 = 1;
		cout << 1;
	}
	else {
		f1 = 0;
		cout << 0;
	}
	if((f1) && (s1[0] == s2[0] && s1[1] == s2[1])){
		f2 = 1;
		cout << 1;
	}
	else{
		f2 = 0;
		cout << 0;
	}
	if((f1 && f2) && pai(s1[2], s2[2])){
		f3 = 1;
		cout << 1;
	}
	else {
		f3 = 0;
		cout << 0;
	}
	if((f1 && f2 && f3) && xl(s1[2], s2[2])){
		f4 = 1;
		cout << 1;
	}
	else{
		cout << 0;
	}
	return 0;
}
