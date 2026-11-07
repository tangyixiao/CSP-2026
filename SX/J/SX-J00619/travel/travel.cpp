#include<bits/stdc++.h>
using namespace std;
int c1, c2;
string s1, s2;
char s1z, s2z;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		cout << '1';
		if(s1.substr(0, 2) == s2.substr(0, 2)){
			cout << '1';
			s1z = s1[2];
			s2z = s2[2];
			if(s1z >= 'A' && s1z <= 'C' && s2z >= 'A' && s2z <= 'C'){
				cout << '1';
				if(s1z > s2z){
					s1z -= 1;
					if(s1z == s2z) cout << '1';
					else cout << '0';
				}else{
					s1z += 1;
					if(s1z == s2z) cout << '1';
					else cout << '0';
				}
			}else if(s1z >= 'D' && s1z <= 'F' && s2z >= 'D' && s2z <= 'F'){
				cout << '1';
				if(s1z > s2z){
					s1z -= 1;
					if(s1z == s2z) cout << '1';
					else cout << '0';
				}else{
					s1z += 1;
					if(s1z == s2z) cout << '1';
					else cout << '0';
				}
			}else cout << "00";
		}else cout << "000";
	}else cout << "0000";
	return 0;
}