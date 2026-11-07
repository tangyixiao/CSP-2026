#include<iostream>
using namespace std;

int row(string &s){
	return (s[0] - '0') * 10 + s[1] - '0';
}
bool side(char a, char b){
	if ((int)a < (int)b) swap(a, b);
	if (a >= 'D' && b <= 'C') return false;
	return true;
}
bool adjust(char a, char b){
	if ((int)a < (int)b) swap(a, b);
	return ((a == 'F' && b == 'D') || (int)a - (int)b == 1);
}

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string c1, s1, c2, s2; cin>>c1>>s1>>c2>>s2;
	
	if (c1 != c2){
		cout<<"0000"; return 0;
	}
	if (row(s1) != row(s2)){
		cout<<"1000"; return 0;
	}
	if (!side(s1[2], s2[2])){
		cout<<"1100"; return 0;
	}
	if (!adjust(s1[2], s2[2])){
		cout<<"1110"; return 0; 
	}
	cout<<"1111";
	return 0;
}
