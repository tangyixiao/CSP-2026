#include<bits/stdc++.h>
using namespace std;
int zw(char c){
	if(c == 'A'){
		return 1;
	}
	if(c == 'B'){
		return 2;
	}
	if(c == 'C'){
		return 3;
	}
	if(c == 'D'){
		return 5;
	}
	if(c == 'F'){
		return 6;
	}
}
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c3, s3, c4, s4, s5, s6;
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	c3 = c1[0] * 10 + c1[1];
	c4 = c2[0] * 10 + c2[1];
	s3 = s1[0] * 10 + s1[1];
	s4 = s2[0] * 10 + s2[1];
	s5 = zw(s1[2]);
	s6 = zw(s2[2]);
	if(c3 == c4){
		cout << 1;
	}else{
		cout << 0;
	}
	if(c3 == c4 && s3 == s4){
		cout << 1;
	}else{
		cout << 0;
	}
	if(c3 == c4 && s3 == s4 && ((s5 <= 3 && s6 <= 3) or (s5 >= 5 && s6 >= 5))){
		cout << 1;
	}else{
		cout << 0;
	}
	if(c3 == c4 && s3 == s4 && abs(s5 - s6) == 1){
		cout << 1;
	}else{
		cout << 0;
	}
	return 0;
}