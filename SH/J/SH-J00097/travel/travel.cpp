#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int c1, c2;
string s1, s2;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		cout << "1";
		int num1 = (s1[0] - '0') * 10 + (s1[1] - '0');
		int num2 = (s2[0] - '0') * 10 + (s2[1] - '0');
		if(num1 == num2){
			cout << "1";
			char p1 = s1[2], p2 = s2[2];
			if(p1 >= 'D' && p2 >= 'D') cout << "11\n";
			else if(p1 <= 'C' && p2 <= 'C'){
				cout << "1";
				if(abs(p2 - p1) <= 1) cout << "1\n";
				else cout << "0\n";
			}else cout << "00\n";
		}else cout << "000\n";
	}else cout << "0000\n";
	
	return 0;
}
