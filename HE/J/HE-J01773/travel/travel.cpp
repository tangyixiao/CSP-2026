#include <bits/stdc++.h>
using namespace std;
int main(){
	//freopen("travel.in";"r";stdin);
	//freopen("travel.out";"w";stdout);
	string ac,ad,bc,bd;
	cin >> ac >> ad >> bc >> bd;
	if (ac[0]==bc[0] && ac[1]==bc[1]){
		cout << '1';
	}
	else{
		cout << '0000';
		return 0;
	}
	if (ad[0]==bd[0] && ad[1]==bd[1]){
		cout << '1';
	}
	else {
		cout << '000';
		return 0;
	}
	if (ad[2]<='C'&&bd[2]<='C'){
		cout << '1';
		if (ad[2]=='B' || bd[2]=='B'){
			cout << '1';
		}
		else{
			cout << '0';
		}
		return 0;
	}
	else if (ad[2]>'C'&&bd[2]>'C'){
		cout << '1' << '1';
		return 0;
	}
	cout << '0' << '0';
	return 0;
}
