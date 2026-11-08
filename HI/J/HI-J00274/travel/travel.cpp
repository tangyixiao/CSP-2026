#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
bool check(char a, char b){
	if(b == 'D' || b == 'F'){
		if(a == 'D' || a == 'F'){
			return 1;
		} else {
			return 0;
		}
	} else {
		if(a == 'D' || a == 'F'){
			return 0;
		} else {
			return 1;
		}
	}
	return 0;
}
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		cout << "1";
		if(s1[0] == s2[0] && s1[1] == s2[1]){
			cout << "1";
			if(check(s1[2], s2[2])){
				cout << "1";
				if(abs(int(s1[2]) - int(s2[2])) == 1){
					cout << "1";
				} else {
					cout << "0";
				}
			} else {
				cout << "00";
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}
	return 0;
} 
