#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	
	if(a[1]+a[0]==c[1]+c[0]){
		cout << 1;
		
	}
	else{
		cout << 0;
	}
	if(a[1]+a[0]==c[1]+c[0]&&b[1]+b[0]==d[1]+d[0]){
		cout << 1;
		
	}
	else{
		cout << 0;
	}
	if(b[1]+b[0]==d[1]+d[0]){
	
		if(b[2]=='C'&&d[2]=='A'||b[2]=='A'&&d[2]=='C'||b[2]=='A'&&d[2]=='B'||b[2]=='B'&&d[2]=='A'||b[2]=='B'&&d[2]=='C'||b[2]=='C'&&d[2]=='B'||b[2]=='D'&&d[2]=='E'||b[2]=='E'&&d[2]=='D'){
			cout << 1;
		
		}
		else{
		cout << 0;
		}
	}
	else{
		cout << 0;
	}
	if(b[1]+b[0]==d[1]+d[0]){
		if(b[1]==d[1]&&b[2]=='A'&&d[2]=='B'||b[2]=='B'&&d[2]=='A'||b[2]=='B'&&d[2]=='C'||b[2]=='C'&&d[2]=='B'||b[2]=='D'&&d[2]=='E'||b[2]=='E'&&d[2]=='D'){
			cout << 1;
		}
		else{
		cout << 0;
		}
	}
	else{
		cout << 0;
	}
	
	
}
