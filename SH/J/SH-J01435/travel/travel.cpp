#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	int n;
	cin >> a >> b >> c >> d;
	if(a==c){
		cout << 1;
		n=0;
	}else{
		cout << 0;
		n=1;
	}
	if(b[1]==d[1]&&n==0){
		cout << 1;
		n=0;
	}else{
		cout << 0;
		n=1;
	}
	if(((char(b[2])<='C'&&char(d[2])<='C')||(char(b[2])>'C'&&char(d[2])>'C'))&n==0){ 
		cout << 1;
		n=0;
	}else{
		cout << 0;
		n=1;
	}
	if(((char(b[2])=='A'&&char(d[2])=='B')||(char(b[2])=='B'&&char(d[2])=='A')||(char(b[2])=='B'&&char(d[2])=='C')||(char(b[2])=='C'&&char(d[2])=='B')||(char(b[2])=='D'&&char(d[2])=='E')||(char(b[2])=='E'&&char(d[2])=='D'))&n==0){ 
		cout << 1;
		n=0;
	}else{
		cout << 0;
		n=1;
	}
		
	return 0;
}
