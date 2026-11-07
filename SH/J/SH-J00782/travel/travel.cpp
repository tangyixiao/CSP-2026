#include<bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
long long pai1, pai2;
char wei1, wei2;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	pai1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	pai2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	wei1 = s1[2];
	wei2 = s2[2];
	if(c1 == c2){
		cout << 1;
		if(pai1 == pai2){
			cout << 1; 
			if(((wei1 == 'A' || wei1 == 'B' || wei1 == 'C') && (wei2 == 'A' || wei2 == 'B' || wei2 == 'C')) || ((wei1 == 'D' || wei1 == 'F') && (wei2 == 'D' || wei2 == 'F'))){
				cout << 1;
				if(abs(wei2 - wei1) == 1){
					cout << 1;
				}else{
					cout << "0";
				}
			} else{
				cout << "00";
			}
		}else{
			cout << "000";
		}
	}else{
		cout << "0000";
	}
	return 0;
} 
