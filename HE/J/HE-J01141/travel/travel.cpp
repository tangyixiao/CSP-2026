#include<bits/stdc++.h>
using namespace std;
int Rc,Rz,Xc,Xz;
char R,X;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> Rc >> Rz >> R >> Xc >> Xz >> X;
	if (R>X){
		swap(R,X);
	} 
	if (Rc==Xc){
		cout << 1;
	}else{
		cout << 0; 
	}
	if (Rc==Xc&&Rz==Xz){
		cout << 1;
	}else{
		cout << 0; 
	}
	if (Rc==Xc&&Rz==Xz&&((R<='C')&&(X<='C')||(R>='D')&&(X>='D'))){
		cout << 1;
	}else{
		cout << 0;
	}
	if (Rc==Xc&&Rz==Xz&&(((R=='A')&&(X=='B'))||((R=='B')&&(X=='C'))||((R=='D')&&(X=='F')))){
		cout << 1;
	}else{
		cout << 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
