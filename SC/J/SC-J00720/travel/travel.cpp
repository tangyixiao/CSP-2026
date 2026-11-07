#include<bits/stdc++.h>
using namespace std;
string c1 , c2 , s1 , s2;
int main(){
	cin >> c1 >> c2 >> s1 >> s2;
	if(c1 != s1) cout << 0000;
	else{
		if(c2[0] != s2[0] || c2[1] != s2[1])cout << 1000;
		else{
			if((c2[2] == 'A' || c2[2] == 'B' || c2[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') || (c2[2] == 'E' || c2[2] == 'F') && (s2[2] == 'E' || s2[2] == 'F')){
				if(c2[2] + 1 == s2[2] || c2[2] - 1 == s2[2]) cout << 1111;
				else cout << 1110;
			}else cout << 1100;
		}
	}
	return 0;
} 