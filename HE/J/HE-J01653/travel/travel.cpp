#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in" , "r" , stdin); 
	freopen("travel.out" , "w" , stdout);
	string s1 , s2 , s3 , s4;
	cin >> s1 >> s2 >> s3 >> s4;
	int c2 = s2[2] , c4 = s4[2];
	if(s1 == s3)	cout << '1';
	else cout << "0000";
	int a = s2[0] + s2[1] , b = s4[0] + s4[1];
	if(s1 == s3){
	if(a == b){
		cout << '1';
		if( (c2 <= 'C' && c4 <= 'C') || (c2 >= 'D' && c4 >= 'D') )
		cout << '1';
		else cout << '0';
	}
	else
		cout << "00";
	if(abs(a - b) == 1 && c2 == c4){
		cout << '1';
	}
	else if(a == b && abs(c2 - c4) == 1){
		if((c2 != 'C' && c4 != 'D') && (c2 != 'D' && c4 != 'C'))
		cout << '1';
		else cout << '0';
	}
	else cout << '0';
}
}
