#include<bits/stdc++.h>

using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
	char a3 = 0, b3 = 0;
	for(int i = 1; i <= 2; ++i){
		char a;
		cin >> a;
		a1 *= 10;
		a1 += a - '0';
	}
	for(int i = 1; i <= 2; ++i){
		char a;
		cin >> a;
		a2 *= 10;
		a2 += a - '0'; 
	}
	char b;
	cin >> b;
	a3 = b; 
	for(int i = 1; i <= 2; ++i){
		char a;
		cin >> a;
		b1 *= 10;
		b1 += a - '0';
	}
	for(int i = 1; i <= 2; ++i){
		char a;
		cin >> a;
		b2 *= 10;
		b2 += a - '0';
	}
	cin >> b;
	b3 = b;
//	cout << a1 << " " << a2 << endl << b1 << " " << b2 << endl << a3 << " " << b3;
	if(a1 == b1){
		cout << 1;
		if(a2 == b2){
			cout << 1;
			if(((a3 == 'A' || a3 == 'B' || a3 == 'C') && (b3 == 'A' || b3 == 'B' || b3 == 'C')) || ((a3 == 'D' || a3 == 'F') && (b3 == 'D' || b3 == 'F'))){
				cout << 1;
				int c1 = a3, c2 = b3;
				if(abs(c1 - c2) == 1){
					cout << 1;
				}
				else{
					cout << "0";
				}
			}
			else{
				cout << "00";
			}
		}
		else{
			cout << "000";
		}
	}
	else{
		cout << "0000";
	}
	return 0;
} 
