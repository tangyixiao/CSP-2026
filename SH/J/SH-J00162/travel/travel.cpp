#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2;
	char s1, s2, s3, s4, s5, s6;
	cin >> c1 >> s1 >> s2 >> s3 >> c2 >> s4 >> s5 >> s6;
	if(c1 != c2){
		cout << "0000";
	}else{
		cout << 1;
		if(s1 != s4 || s2 != s5){
			cout << "000";
		}else{
			cout << 1;
			if('A' <= s3 && s3 <= 'C' && 'A' <= s6 && s6 <= 'C'){
				cout << 1;
				if(abs(s3 - s6) == 1){
					cout << 1;
				}else{
					cout << 0;
				}
			}else{
				if('D' <= s4 && s4 <= 'F' && 'C' <= s6 && s6 <= 'F'){
					cout << 1;
					if(abs(s3 - s6) == 2){
						cout << 1;
					}else{
						cout << 0;
					}
				}else{
					cout << "00";
				}
			}
			
		}
	}
	return 0;
}
