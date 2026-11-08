#include<bits/stdc++.h>
using namespace std;
string c[2], s[2];
int x = 0, s1, s2;
int main(){
	//freopen("travel.in", "r", stdin);
	//freopen("travel.out", "w", stdout);
	for(int i = 1; i <= 2; i++) cin >> c[i] >> s[i];
	s1 = 's[1]';
	s2 = 's[2]';
	if(c[1] != c[2]){
		cout << "0" << "0" << "0" << "0"; 
	}else{
		x = 1;
		cout << x;
	}
	cout << "1" << "1";
	if(s1 == s2 - 1 || s1 == s2 +1){
		x = 1;
		cout << x;
	}else{
		x = 0;
		cout << x;
	}
	return 0;
}
