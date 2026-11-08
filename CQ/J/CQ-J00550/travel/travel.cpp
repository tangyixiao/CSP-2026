#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	string a , b , c , d;
	cin >> a >> b >> c >> d;
	int A = 0 , B = 0 , C = 0 , D = 0;
	int a1 , b1 , c1 , d1;
	swap(b , c);
	//a1 = a; b1 = c; c1 = b; d1 = d;
	//a = a1;b = b1;c = c1;d = d1;
	if (a == b){
		A = 1;
		cout << '1';
	}
	else{
		cout << '0';
	}
	if (A == 1){
		if (c[0] == d[0] && c[1] == d[1]){
			B = 1;
			cout << '1';
		}
		else printf("0");
	}
	else cout << '0';
	if (B == 1){
		if (((c[2] == 'E' && d[2] == 'D') || (c[2] == 'D' && d[2] == 'E')) || (abs(c[2] - d[2]) <= 2 && (c[2] == 'C' || c[2] == 'B' || c[2] == 'A') && (d[2] == 'A' || d[2] == 'B' || d[2] == 'C'))){
			cout << '1';
			C = 1;
		}
		else printf("0");
	}
	else cout << '0';
	if (C == 1){
		if (abs(c[2] - d[2]) == 1){
			cout << 1;
			D = 1;
		}
		else printf("0");
	}
	else cout << '0';
	return 0; 
} 
